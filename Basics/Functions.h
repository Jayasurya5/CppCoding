#pragma once
#include <iostream>
class Functions
{
public:
	Functions();
	~Functions();
	bool isPrime(int value);
	void getPrimesBelowN(int n);
	void fibbanociSeries(int n);
	int factorialNumber(int n);
	int nCr(int n,int r);
	void pascalTriangle();
	void checkPythogranTriplet();
	bool isPythogorus(int a, int b, int c);
	void binaryToDecimal();
	void octalToDecimal();
	void hexaToDecimal();
	void decimalToBinary();
	void decimalToOcta();
	void decimalToHexa();
	void addTwoBinary();
};

