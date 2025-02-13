#include "Sorting.h"
#include <climits>
#include <iostream>
#include <vector>
#include "../DS/Arrays.h"
#include "../Basics/Pointers.h"
using namespace std;
//sorting is keeping array in ascending or descending order
Sorting::Sorting()
{
}
Sorting::~Sorting()
{
}

void Sorting::swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}
void Sorting::selectionSort(int array[], int n)
{
	//select minimum element and swap it with element at beginning
	int min = INT_MAX;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (array[j] < array[i]) {
				swap(array[i], array[j]);
			} 
		}
	}
	for (int i = 0; i < n; i++) {
		std::cout << array[i] << std::endl;
	}

}

void Sorting::bubbleSort(int array[], int n)
{
	//repeatedly swap two elements if they are in wrong order
	//in every iteration last number will go to last position
	// last number will float to top like a bubble
	int counter = 1;
	while (counter < n) {
		for (int i = 0; i < n - counter; i++) {
			if (array[i] > array[i + 1]) {
				swap(array[i], array[i + 1]);
			}
		}
		counter++;
	}
	for (int i = 0; i < n; i++) {
		std::cout << array[i] << std::endl;
	}
}

void Sorting::insertionSort(int array[], int n)
{
	//insert element at its correct position
	//pick element, store it in a variable
	//move elements which are greater than it to right
	//place the element at that position

	for (int i = 1; i < n; i++) {
		int current = array[i];
		int j = i - 1;
		while (array[j] > current && j>=0) {
			array[j + 1] = array[j];
			j--;
		}
		array[j+1] = current;
	}
	for (int i = 0; i < n; i++) {
		std::cout << array[i] << std::endl;
	}
}

void Sorting::merge(int array[], int l, int mid,int r)
{ 
	int n1 = mid - l + 1;
	int n2 = r - mid;
	int* array1 = new int[n1];
	int* array2 = new int[n2];

	for (int i = 0; i < n1; i++) {
		array1[i] = array[l + i];
	}
	for (int i = 0; i < n2; i++) {
		array2[i] = array[mid+1 + i];
	}
	int i = 0;
	int j = 0;
	int k = l;
	while (i < n1 && j < n2) {
		if (array1[i] < array2[j]) {
			array[k] = array1[i];
			i++; k++;
		}
		else {
			array[k] = array2[j];
			j++; k++;
		}
		
	}
	while (i < n1) {
		array[k] = array1[i];
		i++; k++;
	}
	while (j < n2) {
		array[k] = array2[j];
		j++; k++;
	}
}

void Sorting::mergeSort(int array[], int l, int r)
{
	if (l < r) {
		int mid = (l + r) / 2;
		mergeSort(array, l, mid);
		mergeSort(array, mid + 1, r);

		merge(array, l, mid, r);
	}
}

int Sorting::partition(int array[], int l, int r)
{
	int pivot = array[r];
	int i = l - 1;
	for (int j = l; j < r; j++) {
		if (array[j] < pivot) {
			i++;
			std::swap(array[i], array[j]);
		}
	}
	std::swap(array[i + 1], array[r]);
	return i + 1;
}

void Sorting::quickSort(int array[], int l, int r)
{
	if (l < r) {
		int pi = partition(array, l, r);
		quickSort(array, l, pi - 1);
		quickSort(array, pi + 1, r);
	}
}

void Sorting::countSort(int array[],const int n)
{
	//put the array in the countArray
	
	//find the max Value in array
	int maxValue = array[0];
	for(int i=0;i<n;i++){
		if (maxValue < array[i]) {
			maxValue = array[i];
		}
	}

	//make array of size maxValue
	int countArray[10] = { 0 };
	for (int i = 0; i < n; i++) {
		countArray[array[i]]++;
	}
	for (int i = 1; i <= maxValue; i++) {
		countArray[i] = countArray[i] + countArray[i - 1];
	}
	const int arraySize = 5;
	int outputArray[arraySize];
	for (int i = n - 1; i >= 0; i--) {
		outputArray[--countArray[array[i]]] = array[i];
	}
	for (int i = 0; i < n; i++) {
		array[i] = outputArray[i];
	}
}

void Sorting::DNFSort(int array[], int n) {
	int low = 0;
	int mid = 0;
	int high = n - 1;
	while (mid <= high) {
		if (array[mid] == 0) {
			swap(array[low], array[mid]);
			low++;
			mid++;
		}
		else if (array[mid] == 1) {
			mid++;
		}
		else{
			swap(array[high], array[mid]);
			high--;
		}
	}
}

void Sorting::waveSort(int array[], int n) {
	for (int i = 1; i < n; i += 2) {
		if (array[i] > array[i - 1]) {
			std::swap(array[i], array[i - 1]);
		}
		if (array[i] > array[i + 1] && i<=n-2) {
			std:: swap(array[i], array[i + 1]);
		}
	}
}

int Sorting::inversionMerge(int array[], int l, int mid, int r)
{
	int inversion = 0;
	int n1 = mid - l + 1;
	int n2 = r - mid;
	int* array1 = new int[n1];
	int* array2 = new int[n2];

	for (int i = 0; i < n1; i++) {
		array1[i] = array[l + i];
	}
	for (int i = 0; i < n2; i++) {
		array2[i] = array[mid + 1 + i];
	}
	int i = 0;
	int j = 0;
	int k = l;
	while (i < n1 && j < n2) {
		if (array1[i] < array2[j]) {
			array[k] = array1[i];
			i++; k++;
		}
		else {
			array[k] = array2[j];
			inversion += n1 - i;
			j++; k++;
		}

	}
	while (i < n1) {
		array[k] = array1[i];
		i++; k++;
	} 
	while (j < n2) {
		array[k] = array2[j];
		
		j++; k++;
	}
	return inversion;
}

int Sorting::inversionCount(int array[], int l, int r)
{	
	int inversion =0;
	if (l < r) {
		int mid = (l + r) / 2;
		inversion += inversionCount(array, l, mid);
		inversion += inversionCount(array, mid + 1, r);
		inversion += inversionMerge(array, l, mid, r);
	}
	return inversion;
}


