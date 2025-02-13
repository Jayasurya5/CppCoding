#pragma once
#include<iostream>
class Reccursion
{
public:
	Reccursion();
	int sum(int n);
	int basics();
	int nPowP(int n, int p);
	int factorial(int n);
	int nthFibonacciNum(int n);
	bool isArraySorted(int array[], int n);
	void printValueAsc(int n);
	void printValueDsc(int n);
	int firstOccuranceInArray(int array[], int n, int i, int key);
	int lastOccuranceInArray(int array[], int n, int i, int key);
	void reverseString(std::string str);
	void replacePi(std::string str);
	void towerOfHanoi(int n, char src, char dest, char helper);
	void removeDuplicates(std::string str);
	void moveXtoLast(std::string str);
	void subSequence(std::string str, std::string ans);
	void subSeqASCII(std::string str, std::string ans);

	void keypad(std::string str, std::string ans);

	void permutations(std::string str,std::string ans);
	int countPath(int start, int end);
	int countPathMaze(int n, int i, int j);
	int tilingWays(int n); 
	int friendsPairing(int n);
	int zeroOneKnapsack(int value[],int weight[],int n ,int W);

	//backtracking
	bool isSafe(int** array, int x, int y, int n);
	bool ratInMaze(int** array, int x, int y, int n, int** solArr);
	//bool permute(std::vector<int> vec, 0);
	bool isSafeNQ(int** array, int x, int y, int n);
	bool nQueen(int** array, int x, int n);
	 
private:
	std::string keypadArr[10];

};

