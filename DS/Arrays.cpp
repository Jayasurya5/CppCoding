#include "Arrays.h"
#include <iostream>
#include <climits>
Arrays::Arrays() {
}
Arrays::~Arrays()
{
}

void Arrays::inputOutput()
{
	int array1[4] = { 1,2,3,4 };

	int array2[5];
	array2[0] = 0;
	array2[1] = 0;
	array2[2] = 0;
	array2[3] = 0;
	array2[4] = 0;
	const int size = 5;
	int array[size]{};

	for (int i = 0; i < size; i++) {
		std::cin>>array[i];
	}
	for (int i = 0; i < size; i++) {
		std::cout <<array[i]<<std::endl;
	}

	//max and min in array

	int minNo = INT_MAX;
	int maxNo = INT_MIN;

	for (int i = 0; i < size; i++) {
		//if (array[i] < min) {
		//	min = array[i];
		//}
		minNo = std::min(minNo,array[i]);
		//if (array[i] > max) {
		//	max = array[i];
		//}
		maxNo = std::max(maxNo, array[i]);
	}

	std::cout << "Minimum number = " << minNo << std::endl;
	std::cout << "Max number = " << maxNo << std::endl;


}

int Arrays::linearSearch(int array[],int n, int key)
{
	for (int i = 0; i < n; i++) {
		if (key == array[i]) {
			return i;
		}
	}
	return -1;
}

int Arrays::binarySearch(int array[], int n, int key)
{
	//array should be in sorted order
	// compare with mid , change start and end
	int start = 0;
	int end = n;
	
	while (start <= end) {
		int mid = (start + end) / 2;
		if (key == array[mid]) {
			return mid;
		}
		else if (key < array[mid]) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return -1;
}

int Arrays::maxTillI(int array[], int n)
{
	int maxValue = INT_MIN;
	for (int i = 0; i < n; i++) {
		/*if (maxValue < array[i]) {
			maxValue = array[i];
		}*/
		maxValue = std::max(maxValue, array[i]);
		std::cout << maxValue<<" ";
	}
	return 0;
}

int Arrays::sumOfSubArrays(int array[], int n)
{	
	int totalSum = 0;
	int sum = 0;
		for (int i = 0; i < n; i++) {
			sum = 0;
			for (int j = i; j < n; j++) {
				sum +=  array[j];
				totalSum += sum;
				std::cout << sum << std::endl;
			}
		}
		std::cout << totalSum << std::endl;
	return 0;
}

void Arrays::longestArthematicSubArray(int array[], int n)
{
	int startIndex = 0;
	int endIndex = 0;
	int count = 2;
	int diff = array[1]-array[0];
	int currStart = 0;
	int currEnd = 0;
	int currCount = 2;
	for (int i = 1; i < n; i++) {
		currEnd = i;
		if ((array[i] - array[i - 1]) == diff) {
			currCount++;
		}
		else {
			diff = array[i] - array[i - 1];
			currStart = i-1;
			currCount = 2;
		}
		if (currCount > count) {
			startIndex = currStart;
			endIndex = currEnd;
			count = currCount;
		}
	}
	std::cout << startIndex << std::endl;
	std::cout << endIndex << std::endl;
}

void Arrays::recordBreakingDay(int array[], int n)
{
	int maxNum = INT_MIN;
	for (int i = 0; i < n-1; i++) {
		//maxNum = std::max(array[i], maxNum);
		if (array[i] > maxNum && array[i]>array[i+1]) {
			maxNum = array[i];
			std::cout << i <<" is record breaking day" << std::endl;
		}
	}
	if (array[n - 1] > maxNum) {
		std::cout << n - 1 << " is record breaking day" << std::endl;
	}
}

void Arrays::findMinMax(int array[], int n, int& minVal, int& maxVal) {
	if (n == 0) return; // If the array is empty, exit the function

	minVal = array[0]; // Initialize minVal to the first element
	maxVal = array[0]; // Initialize maxVal to the first element

	for (int i = 1; i < n; i++) {
		if (array[i] < minVal) {
			minVal = array[i]; // Update minVal if a smaller element is found
		}
		if (array[i] > maxVal) {
			maxVal = array[i]; // Update maxVal if a larger element is found
		}
	}
}

void Arrays::firstRepeatingElement(int array[], int n)
{
	int minIndex = INT_MAX;
	const int N = 10000;

	int indexArray[N]{};

	for(int i=0; i < N;i++) {
		indexArray[i] = -1;
	}
	for (int i = 0; i < n; i++) {
		int arrayValue = array[i];
		if (indexArray[arrayValue] == -1) {
			indexArray[arrayValue] = i;
		}
		else {
			if (indexArray[arrayValue] < minIndex) {
				minIndex = indexArray[arrayValue];
			}
		}
	}
	std::cout << minIndex << std::endl;

}

void Arrays::subArrayGivenSum(int array[], int n,int sum)
{
	int startIndex = 0;
	int endIndex = 0;
	int value = 0;
	while (endIndex < n) {
		value = value + array[endIndex];
		while (value > sum) {
			value = value - array[startIndex];
			startIndex++;
			if (startIndex == endIndex) {
				break;
			}
		}
		if (value == sum) {
			std::cout << startIndex << std::endl;
			std::cout << endIndex << std::endl;
			break;
		}
		endIndex++;
	}
	return;
}

void Arrays::smallestPtveMissingNum(int array[], int n)
{	
	const int N = 10000;
	int flagArray[N]{};
	int missingValue = -1;
	for (int i = 0; i < n; i++) {
		int flagIndex = array[i];
		if (flagIndex >= 0) {
			flagArray[flagIndex] = true;
		}
	}
	for (int i = 0; i < N; i++) {
		if (flagArray[i] == false) {
			missingValue = i;
			break;
		}
	}
	std::cout << missingValue << std::endl;
}

void Arrays::printAllSubArrays(int array[], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			for (int k = i; k <= j; k++) {
				std::cout << array[k] << " ";
			}
			std::cout<<std::endl;
		}
	}

}

void Arrays::maxSubArraySum(int array[], int n)
{	
	//brute force approch
	/*int maxSum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int sum = 0;
			for (int k = i; k <= j; k++) {
				sum += array[k];
			}
			maxSum = std::max(maxSum, sum);
		}
	}
	std::cout << maxSum;
	*/

	//cumulative sum approch
	//store in cumulative sum array
	/*const int length = 28;
	int currentSum[length + 1]{};
	currentSum[0] = 0;
	for (int i = 1; i <= length; i++) {
		currentSum[i] = currentSum[i - 1] + array[i - 1];
	}
	for (int i = 0; i <= length; i++) {
		std::cout << currentSum[i]<< " ";
	}
	int maxSum = INT_MIN;
	for (int i = 1; i <= length; i++) {
		int sum = 0;
		for (int j = 0; j < i; j++) {
			sum = currentSum[i] - currentSum[j];
			maxSum = std::max(sum, maxSum);
		}
	}
	std::cout << maxSum;
	*/
	

	//kadene's algorithm
	int maxSum = INT_MIN;
	int currentSum = 0;
	for (int i = 0; i < n; i++) {
		currentSum += array[i];
		if (currentSum < 0) {
			currentSum = 0;
		}
		maxSum = std::max(maxSum, currentSum);
	}
	std::cout << maxSum;
}


void Arrays::maxCircularSubArraySum(int array[], int n)
{	
	int wrapsum;
	int nonwrapsum;
	nonwrapsum = kadane(array, n);
	int totalsum = 0;
	for (int i = 0; i < n; i++) {
		totalsum += array[i];
		array[i] = -array[i];
	}
	wrapsum = totalsum + kadane(array, n);
	std::cout << std::max(wrapsum, nonwrapsum);
}

int Arrays::kadane(int array[], int n)
{
	int maxSum = INT_MIN;
	int currentSum = 0;
	for (int i = 0; i < n; i++) {
		currentSum += array[i];
		if (currentSum < 0) {
			currentSum = 0;
		}
		maxSum = std::max(maxSum, currentSum);
	}
	return maxSum;
}

void Arrays::pairsum(int array[], int n)
{
	int low = 0;
	int high = n - 1;
	int key = 10 ;
	while (low<high) {
		if (array[low] + array[high] > key) {
			high--;
		}
		else if (array[low] + array[high] < key) {
			low++;
		}
		else { std::cout << low << " " << high << std::endl; return; }
	}
	std::cout <<"No such pair "<< std::endl;
}

void Arrays::swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Arrays::print2DArray(int** array, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void Arrays::findIn2DArray(int** array, int n, int m)
{	
	int key = 4;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (array[i][j] == key) {
				std::cout << "i values is " << i << " j value is " << j << std::endl;
			}
		}
	}
}

void Arrays::spiralOrderTraversal(int** array, int n, int m)
{
	int rowStart = 0;
	int rowEnd = n - 1;
	int columnStart = 0;
	int columnEnd = m - 1;

	while (rowStart <= rowEnd && columnStart <= columnEnd) {
		//for row start left to right
		for (int colIndex = columnStart; colIndex <= columnEnd; colIndex++) {
			std::cout << array[rowStart][colIndex] << " ";
		}
		rowStart++;

		//for column end - up to down
		for (int rowIndex = rowStart; rowIndex <= rowEnd; rowIndex++) {
			std::cout << array[rowIndex][columnEnd] << " ";
		}
		columnEnd--;

		// Check if there are remaining rows
		if (rowStart <= rowEnd) {
			// Traverse from right to left along the bottom row
			for (int colIndex = columnEnd; colIndex >= columnStart; colIndex--) {
				std::cout << array[rowEnd][colIndex] << " ";
			}
			rowEnd--;
		}

		// Check if there are remaining columns
		if (columnStart <= columnEnd) {
			// Traverse from bottom to top along the left column
			for (int rowIndex = rowEnd; rowIndex >= rowStart; rowIndex--) {
				std::cout << array[rowIndex][columnStart] << " ";
			}
			columnStart++;
		}
	}
}

void Arrays::traverseArray(int** array, int n)
{	
	print2DArray(array, n, n);
	std::cout<<std::endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j) {
				swap(&array[i][j], &array[j][i]);
			}
		}
	}
	print2DArray(array, n, n);
}

void Arrays::multiplyArrays(int** array1, int** array2, int a, int b, int c, int d)
{	
	
	int multiArray[2][2]{};
	if (b == c) {
		for (int i = 0; i < a; i++) {
			for (int k = 0; k < d; k++) {
				for (int j = 0; j < b; j++) {
					multiArray[i][k] += array1[i][j] * array2[j][k];
				}
			}
		}
		for (int i = 0; i < 2; i++) {
			for (int k = 0; k < 2; k++) {
				std::cout << multiArray[i][k] << " ";
			}
			std::cout << std::endl;
		}
	}
	else {
		std::cout << "the arrays cannot be modified ";
	}
	
}

void Arrays::findInSortedArray(int** array, int n, int m) const
{	
	int key = 3;
	int i = 0;
	int j = m-1;
	while (i>=0 && j <m) {
		if (key == array[i][j]  ) {
			std::cout << i << " " << j << std::endl;
			return;
		}
		else if (key > array[i][j]) {
			i++;
		}
		else {
			j--;
		}
	}
	std::cout << "not found";
}

void Arrays::checkPalindrome(char array[], int n) const
{
	int i = 0;
	int j = n - 2;
	while (i <= j) {
		if (array[i] != array[j]) {
			std::cout << "not a palindrome";
			return;
		}
		i++;
		j--;
	}
	std::cout << "palindrome";
}

void Arrays::maxWord(char array[], int n) const
{	
	int i = 0;
	int maxCount = INT_MIN;
	int count = 0;
	int startIndex = 0;
	int maxStartIndex = 0;
	while (true) {
		if (array[i] == ' ' || array[i] == '\0') {
			if (count > maxCount) {
				maxCount = count;
				maxStartIndex = startIndex;
			}
			count = 0;
			startIndex = i+1; 
		}
		else {
			count++;
		}
		if (array[i] == '\0') {
			break;
		}
		i++;
	}
	std::cout << maxCount << std::endl;
	for (int i = 0; i < maxCount; i++) {
		std::cout << array[maxStartIndex + i];
	}
}












