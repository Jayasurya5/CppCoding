#include "Reccursion.h"
#include <string>

// Constructor definition
Reccursion::Reccursion() {
	keypadArr[0] = " ";
	keypadArr[1] = "/";
	keypadArr[2] = "abc";
	keypadArr[3] = "def";
	keypadArr[4] = "ghi";
	keypadArr[5] = "jkl";
	keypadArr[6] = "mno";
	keypadArr[7] = "pqrs";
	keypadArr[8] = "tuv";
	keypadArr[9] = "wxyz";
}
int Reccursion::basics()
{	
	//calls itself until end case is hit

	return 0;
}
int Reccursion::sum(int n)
{
	//n + n-1 + n-2 + n-3 +....1
	if (n <= 0) {
		return 0;
	}
	return n + sum(n - 1);
}

int Reccursion::nPowP(int n, int p)
{	
	// npowp = n*n*n*n*n*n*n;
	if (p <= 0) {
		return 1;
	}
	return n * nPowP(n,p-1);
}

int Reccursion::factorial(int n)
{	
	// n! = n * n-1 * n-2 * n-3 .... 1
	if (n < 0) {
		return 0;
	}
	if (n == 0) {
		return 1;
	}
	return n*factorial(n-1);
}

int Reccursion::nthFibonacciNum(int n)
{	
	if (n == 0 || n == 1) {
		return n;
	}
	return nthFibonacciNum(n-1) + nthFibonacciNum(n-2);
}

bool Reccursion::isArraySorted(int array[], int n)
{	
	if (n == 1) {
		return true;
	}
	bool restArray = isArraySorted(array + 1, n-1);
	//checking first element and second element
	return ((array[0] < array[1]) && restArray);
}

void Reccursion::printValueAsc(int n)
{	
	if (n == 0) {
		return;
	}
	
	printValueAsc(n - 1);
	std::cout << n << " ";
	return;
}

void Reccursion::printValueDsc(int n)
{
	if (n == 0) {
		return;
	}

	std::cout << n << " ";
	printValueDsc(n - 1);
}

int Reccursion::firstOccuranceInArray(int array[], int n, int i, int key)
{
	if (i == n) {
		return -1;
	}

	if (array[i] == key) {
		return i;
	}
	firstOccuranceInArray(array, n, i + 1, key);
}

int Reccursion::lastOccuranceInArray(int array[], int n, int i, int key)
{	
	if (i == n) {
		return -1;
	}
	int restArray = lastOccuranceInArray(array, n, i + 1, key);
	if (restArray != -1) {
		return restArray;
	}
	if (array[i] == key) {
		return i;
	}
	return -1;

}

void Reccursion::reverseString(std::string str)
{	
	if (str.length() == 0) {
		return;
	}
	reverseString(str.substr(1));
	std::cout << str[0];
}

void Reccursion::replacePi(std::string str)
{
	if (str.length() == 0) {
		return;
	}
	if (str.length() == 1) {
		std::cout << str[0];
		return;
	}
	if (str[0] == 'p' && str[1] == 'i') {
		std::cout << "3.14";
		replacePi(str.substr(2));
	}
	else {
		std::cout << str[0];
		replacePi(str.substr(1));
	}
}

void Reccursion::towerOfHanoi(int n, char src, char dest,char helper)
{
	//only one block can be moved once
	//you cannot put big block on top of small block
	//A ,B ,c poles are present
	 
	//solution: if n-1 blocks can be put on  block B
	// biggest can be moved from block A to C
	// put n-1 blocks onto c 
	// source rod, destination rod -send block from source to destination , helper rod - put n-1 on helper 
	//step 1: send n-1 blocks from source to helper using destinaton
	//step 2: send n th block from source to dest
	//step 3: send n-1 blocks from helper to destination using source

	if (n == 0) {
		return;
	}
	towerOfHanoi(n - 1, src, helper, dest);
	std::cout << "move " << n <<" from " << src << " to " << dest << std::endl;
	towerOfHanoi(n - 1, helper, dest, src);
}
void Reccursion::removeDuplicates(std::string str)
{
	if (str.length() == 0) {
		return;
	}
	if (str[0] == str[1]) {
		removeDuplicates(str.substr(1));
	}
	else {
		std::cout << str[0];
		removeDuplicates(str.substr(1));
	}
}

void Reccursion::moveXtoLast(std::string str)
{	
	if (str.length() == 0) {
		return;
	}
	if (str[0] != 'x') {
		std::cout << str[0];
		moveXtoLast(str.substr(1));
	}
	else{
		moveXtoLast(str.substr(1));
		std::cout << str[0];
	}
}

void Reccursion::subSequence(std::string str, std::string ans)
{
	if (str.length() == 0) {
		std::cout << ans << std::endl;
		return;
	}
	char ch = str[0];
	std::string restOfString = str.substr(1);

	subSequence(restOfString, ans);
	subSequence(restOfString, ans+ch);




}

void Reccursion::subSeqASCII(std::string str, std::string ans)
{
	if (str.length() == 0) {
		std::cout << ans << std::endl;
		return;
	}

	char ch = str[0];
	int value = ch;
	std::string restOfString = str.substr(1);

	subSeqASCII(restOfString, ans);
	subSeqASCII(restOfString, ans + ch);
	subSeqASCII(restOfString, ans + std::to_string(value));
}

void Reccursion::keypad(std::string str, std::string ans)
{
	if (str.length() == 0) {
		std::cout << ans << std::endl;
		return;
	}

	char ch = str[0];
	std::string code = keypadArr[ch -'0'];
	std::string ros = str.substr(1);
	for (int i = 0; i < code.length();i++) {
		keypad(ros, ans + code[i]); // Recursive call for each character in the string
	}
}

void Reccursion::permutations(std::string str, std::string ans)
{
	if (str.length() == 0) {
		std::cout << ans << std::endl;
		return;
	}
	//substr 0 starting index , i  length of the substring
	//str.substr(i+i) starting from index i+1 and length is optional(gives rest of the string)
	for (int i = 0; i < str.length(); i++) {
		char ch = str[i];
		std::string ros = str.substr(0, i) + str.substr(i+1);
		permutations(ros, ans + ch);
	 }
}

int Reccursion::countPath(int start, int end)
{	
	if (start == end) {
		return 1;
	}
	if (start > end) {
		return 0;
	}
	int count = 0;
	for (int i = 1; i <= 6; i++) {
		count += countPath(start+i, end);
	}
	return count;
}

int Reccursion::countPathMaze(int n, int i, int j)
{	
	if (i == n && j == n) {
		return 1;
	} 
	if (i >= n || j >= n) {
		return 0;
	}
	return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
}

int Reccursion::tilingWays(int n)
{
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return tilingWays(n - 1) + tilingWays(n - 2);
}

int Reccursion::friendsPairing(int n)
{
	if (n == 0 || n == 1 || n == 2) {
		return n;
	}
	return friendsPairing(n - 1) + friendsPairing(n - 2) * (n - 1);
}

int Reccursion::zeroOneKnapsack(int value[], int weight[], int n, int W)
{
	if (n == 0 || W == 0) {
		return 0;
	}
	if (weight[n - 1] > W) {
		return zeroOneKnapsack(value, weight, n - 1, W);
	}
	return std::max((zeroOneKnapsack(value, weight, n - 1, W - weight[n - 1])  + value[n-1]),(zeroOneKnapsack(value, weight, n - 1 , W )));
}

bool Reccursion::isSafe(int** array, int x, int y, int n)
{
	if (x < n && y < n && array[x][y] == 1) {
		return true;
	} 
	return false;
} 

bool Reccursion::ratInMaze(int** array, int x, int y, int n, int** solArr)
{
	if (x == n - 1 && y == n - 1) {
		solArr[x][y]=1;
		return true;
	}
	if (isSafe(array, x, y, n)) {
		solArr[x][y] = 1;
		if (ratInMaze(array, x + 1, y, n, solArr)) {
			return true;
		}
		if (ratInMaze(array, x, y + 1, n, solArr)) {
			return true;
		}
		solArr[x][y] = 0; //backtracking
		return false; 
	}
	return false;
}

bool Reccursion::isSafeNQ(int** array, int x, int y, int n)
{
	//check for top
	for (int row = 0; row < x; row++) {
		if (array[row][y] == 1) {
			return false;
		}
	}
	
	//check for left diagonal
	int row = x;
	int column = y;
	while (row >= 0 && column >= 0) {
		if (array[row][column] == 1) {
			return false;
		}
		row--;
		column--;
	}

	//check for right diagonal
	row = x;
	column = y;
	while (row >= 0 && column < n) {
		if (array[row][column] == 1) {
			return false;
		}
		row--;
		column++;
	}
	return true;
}

bool Reccursion::nQueen(int** array, int x, int n)
{
	if (x >= n) { //recc ending scenario
		return true;
	}
	for (int y = 0; y < n; y++) {
		if (isSafeNQ(array, x, y, n)) {
			array[x][y] = 1;
			if (nQueen(array, x + 1, n)) {
				return true;
			} 
			array[x][y] = 0; //backtracking
		}
	}
	return false;
}














