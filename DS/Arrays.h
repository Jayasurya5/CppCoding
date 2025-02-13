#pragma once
class Arrays
{
public:
	Arrays();
	~Arrays();

	void inputOutput();
	int linearSearch(int array[],int n, int key);
	int binarySearch(int array[], int n, int key);
	int maxTillI(int array[], int n);
	int sumOfSubArrays(int array[], int n);
	void longestArthematicSubArray(int array[], int n);
	void recordBreakingDay(int array[], int n);
	void findMinMax(int array[], int n, int& minVal, int& maxVal);
	void firstRepeatingElement(int array[], int n);
	void subArrayGivenSum(int array[], int n,int sum);
	void smallestPtveMissingNum(int array[], int n);
	void printAllSubArrays(int array[], int n);
	void maxSubArraySum(int array[], int n);
	void maxCircularSubArraySum(int array[], int n);
	int kadane(int arr[], int n);
	void pairsum(int array[], int n);
	void swap(int* a, int* b);


	//2D arrays
	void print2DArray(int** array, int n, int m);
	void findIn2DArray(int** array, int n, int m);
	void spiralOrderTraversal(int** array, int n, int m);
	void traverseArray(int** array, int n);
	void multiplyArrays(int** array1, int** array2, int a, int b, int c,int d);
	void findInSortedArray(int** array, int n, int m) const;

	//char arrays
	void checkPalindrome(char array[], int n)const;
	void maxWord(char array[], int n)const;
};

