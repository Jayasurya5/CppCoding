#include "Vectors.h"
#include <algorithm>

void Vectors::printVector(std::vector<int> v)
{
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << std::endl;
	}

	std::vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		std::cout << *it << std::endl;
	}

	for (auto element : v) {
		std::cout << element << std::endl;
	}
	std::cout << std::endl;
	v.pop_back(); //1 2

	std::vector<int> v2(3, 50); // 50 50 50 (3 times 50)
	std::swap(v, v2);
	std::cout << std::endl;
	for (auto element : v) {
		std::cout << element << std::endl;
	}
	for (auto element : v2) {
		std::cout << element << std::endl;
	}
	std::cout << std::endl;

	std::sort(v.begin(), v.end());
}

void Vectors::printPair()
{
	std::pair<int, char> p;
	p.first = 3;
	p.second = 'f';
	//to store pair of objects
	 
}


void Vectors::reduceArray(int array[], int n)
{
	std::vector<std::pair<int, int>> vec;
	
	for (int i = 0; i < n; i++) {
		vec.push_back(std::make_pair(array[i], i));
	}
	std::sort(vec.begin(), vec.end(), Vectors::myCompare);

	for (int i = 0; i < vec.size(); i++) {
		array[vec[i].second] = i;
	}

	for (int i = 0; i < vec.size(); i++) {
		std::cout<<array[i]<<" ";
	}
}

bool Vectors::myCompare(std::pair<int, int> p1, std::pair<int, int> p2)
{
	return p1.first < p2.first;
}
