#pragma once
#include<iostream>
class BitManipulation
{
public:
	void getBitAtPosition(int n, int pos)const;
	void setBitAtPosition(int n, int pos)const;
	void clearBitAtPos(int n, int pos)const;
	void udpateBitAtPos(int n, int pos, int value)const;
	void isPowerOf2(int n);
	void countOnesInNumber(int n);
	void subSets() const;
	void uniqueNumber() const;
	void twoUniqueNumber() const;
	void uniqueInTriples() const;

	//extra ones
	void steveOfErastosthenes() const;
	void primeFactorizationSetve() const;
	void divisibleBy2Num()const;
	void euclidGCD()const;
};

