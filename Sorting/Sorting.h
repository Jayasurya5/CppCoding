#pragma once
class Sorting
{
public:
	Sorting();
	~Sorting();
	void swap(int& a, int& b);
	void selectionSort(int array[],int n);
	void bubbleSort(int array[], int n);
	void insertionSort(int array[], int n);
	void merge(int array[], int l, int mid, int r);
	void mergeSort(int array[], int l, int r);

	int partition(int array[], int l, int r);
	void quickSort(int array[], int l, int r);

	void countSort(int array[],const int n);

	void DNFSort(int array[], int n);

	void waveSort(int array[], int n);

	int inversionMerge(int array[], int l, int mid, int r);

	int inversionCount(int array[], int l, int r);
};


