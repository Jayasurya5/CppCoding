#include "BitManipulation.h"

void BitManipulation::getBitAtPosition(int n, int pos) const
{
	 //left shift operator << - shifts 1 to those many bits
	// &   do AND operation 
	// ((n & (1<<pos))!=0)
	int value = 1 << pos;
	int bit = n & value;
	if (bit != 0) { 
		bit = 1;
	}
	std::cout << bit << std::endl;

}

void BitManipulation::setBitAtPosition(int n, int pos) const
{
	int value = 1 << pos;
	int bit = n | value;
	std::cout << bit << std::endl;
}

void BitManipulation::clearBitAtPos(int n, int pos) const
{
	int value = 1 << pos;
	//negation 0100 -> 1011
	value = ~value;
	int bit = n & value;
	std::cout << bit << std::endl;
}

void BitManipulation::udpateBitAtPos(int n, int pos, int bitValue) const
{
	//clear the value
	int value = 1 << pos;
	//negation 0100 -> 1011
	value = ~value;
	int bit = n & value;
	std::cout << bit << std::endl;

	//update the value
	value = bitValue << pos;
	bit = n | value;
	std::cout << bit << std::endl;
}

void BitManipulation::isPowerOf2(int n)
{	//  110 & 101 = 100   
	//  n  and (n & n-1) have only 1 bit of 1 different, everything else will be same
	//	1000 & 0111 = 0000
	if (n  == 0) {
		std::cout << "value not power of 2" << std::endl;
	}
	if ((n & n - 1) == 0) {
		std::cout << "value is power of 2" << std::endl;
	}
	else {
		std::cout << "value not power of 2" << std::endl;
	}
}

void BitManipulation::countOnesInNumber(int n)
{
	int count = 0;
	while (n != 0) {
		n = n* n - 1;
		count++;
	}
	std::cout << count << std::endl;
}

void BitManipulation::subSets()const 
{	
	int array[] = { 1,2,3,4 };
	int n = 4;
	for (int i = 0; i < (1 << n); i++) {
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				std::cout << array[j] << " ";
			}
		}std::cout << std::endl;
	}
}

void BitManipulation::uniqueNumber() const
{	
	const int n = 7;
	int array[n] = { 2,3,4,5,4,3,2 };
	int value = array[0];
	for (int i = 1; i < n; i++) {
		value = value ^ array[i];
	}
	std::cout << value << std::endl;
}

void BitManipulation::twoUniqueNumber() const
{
	const int n = 7;
	int array[n] = { 2,3,4,5,4,3,2 };
	int value = array[0];
	for (int i = 1; i < n; i++) {
		value = value ^ array[i];
	}
	int setbit = 0;
	int pos = 0;
	while (setbit != 1) {
		setbit = value & 1;
		pos++;
		value = value >> 1;
	}
}

void BitManipulation::uniqueInTriples() const
{	
	int n = 10;
	int array[10] = { 1, 2, 3, 1, 2, 3, 1, 2, 3, 4 };
	for (int i = 0; i < 64; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			if ((array[j] & (1 << i)) != 0) {
				sum++;
			}
		}
		if (sum % 3 != 0) {
			
		}
	}
}

void BitManipulation::steveOfErastosthenes() const
{
	const int n = 100;
	int prime[n]{};
	for (int i = 2; i < n; i++) {
		if (prime[i] == 0) {
			for (int j = i * i; j <= n; j += i) {
				prime[i] = 1;
			}
		}
	}

	for (int i = 2; i < n; i++) {
		if (prime[i] == 0) {
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
}

void BitManipulation::primeFactorizationSetve() const
{
	const int n = 100;
	int m = n;
	int spf[n]{};
	for (int i = 2; i <= n; i++) {
		spf[i] = i;
	}

	for (int i = 2; i < n; i++) {
		if (spf[i] == i) {
			for (int j = i * i; j <= n; j += i) {
				if (spf[j] == j) {
					spf[j] = i;
				}
			}
		}
	}
	while (m != 1) {
		std::cout << spf[n] << " ";
		m = m / spf[n];
	}
}

void BitManipulation::divisibleBy2Num()const
{	
	int n = 10;
	int a = 2;
	int b = 5;
	int c1 = n / a;
	int c2 = n / b;
	int c3 = n / (a * b);
	int total = c1 + c2 - c3;
}

void BitManipulation::euclidGCD() const
{
	int a = 100;
	int b = 20;
	while (b != 0) {
		int rem = a % b;
		a = b;
		b = rem;
	}
	std::cout << a << std::endl;
}

