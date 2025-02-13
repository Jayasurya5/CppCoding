#pragma once
#include<vector>
#include<iostream>
class Vectors
{	
	

public:
	void printVector(std::vector<int> v);
	void printPair();
	void reduceArray(int array[], int n);
	static bool myCompare(std::pair<int, int> p1, std::pair<int, int> p2);
};

