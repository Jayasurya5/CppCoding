#include "Patterns.h"
#include <iostream>
Patterns::Patterns()
{
}

Patterns::~Patterns()
{
}

void Patterns::rectanglePattern()
{
	int rows = 6;
	int cols = 7;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout<< " *";
		}
		std::cout<< std::endl;
	}

}



void Patterns::hollowRectangle() {
	int rows = 6;
	int cols = 7;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i == 0 || j == 0 || i == rows - 1 || j == cols - 1) {
				std::cout << " *";
			}
			else {
				std::cout << "  ";
			}
		}
		std::cout << std::endl;
	}
}

void Patterns::invertedHalfPyramid()
{
	int n = 5;
	for(int i=n;i>0;i--)
	{
		for (int j = 0; j < i; j++) {
			std::cout << " *";
		}
		std::cout << std::endl;
	}
}

void Patterns::halfPyramid180Rot()
{
	int n = 5;  
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n - i - 1; k++) {
			std::cout << "  ";
		}
		for (int j = 0; j <= i; j++) {
			std::cout << " *";
		}
		std::cout << std::endl;
	}
}

void Patterns::halfPyramidUsingNum()
{
	int n = 5;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++) {
			std::cout << " " << i;
		}
		std::cout << std::endl;
	}
}

void Patterns::floydTriangle()
{
	int n = 5;
	int value = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++) {
			std::cout << " " << value;
			value++;
		}
		std::cout << std::endl;
	}
}

void Patterns::butterflyPattern()
{
	int n = 5;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++) {
			std::cout << " *";
		}
		for (int j = 2 * (n - i); j > 0; j--) {
			std::cout << "  ";
		}
		for (int j = 1; j <= i; j++) {
			std::cout << " *";
		}
		std::cout << std::endl;
	}
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			std::cout << " *";
		}
		for (int j = 2 * (n - i); j >= 1; j--) {
			std::cout << "  ";
		}
		for (int j = 1; j <= i; j++) {
			std::cout << " *";
		}
		std::cout << std::endl;
	}
}

void Patterns::invertedNumberPattern()
{
	int n = 5;
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			std::cout << " " << j;
		}
		std::cout << std::endl;
	}
}

void Patterns::ZeroOnePattern()
{	
	int value = 0;
	int n = 5;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++) {
			if ((i + j) % 2) {
				std::cout << " " << 0;
			}
			else {
				std::cout << " " << 1;
			}
		}
		std::cout << std::endl;
	}
}

void Patterns::rhombusPattern() {
	int n = 5;
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j < i; j++) {
			std::cout << "  ";
		}
		for (int j = 1; j <= n; j++) {
			std::cout << " *";
		}
		std::cout << std::endl;
	}
}

void Patterns::numberTriangle()
{
	int n = 5;
	for (int i = 1; i <= n; i++)
	{
		for (int j = n - i; j >= 1; j--) {
			std::cout <<" ";
		}
		for (int j = 1; j <= i; j++) {
			std::cout << " " << j;
		}
		std::cout << std::endl;
	}
}

void Patterns::palindromicPattern()
{	
	int n = 5;
	for (int i = 1; i <= n; i++) {
		for (int j = n-1; j >= i; j--) {
			std::cout << "  ";
		}
		for (int j = i; j >= 1; j--) {
			std::cout << " " << j;
		}
		for (int j = 2; j <= i; j++) {
			std::cout << " " << j;
		}
		std::cout << std::endl;
	}
}

void Patterns::starPattern()
{
	int n = 5;
	for (int i = 1; i <= n; i++) {
		for (int j = n-i; j >= 1; j--) {
			std::cout << "  ";
		}
		for (int j = 1; j <= 2 * ( i ) - 1; j++) {
			std::cout << " *";
		}
		std::cout << std::endl;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << "  ";
		}
		for (int j = 2*(n-i)-1; j >= 1; j--) {
			std::cout << " *";
		}
		std::cout << std::endl;
	}
}

void Patterns::zigzagPattern()
{
	int n = 9;
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= n; j++)
		{
			if ((i + j) % 4 == 0|| i == 2 && (j % 4) == 0)
			{
				std::cout << "* ";
			}
			else
			{
				std::cout << "  ";
			}
		}
		std::cout << std::endl;
	}
}

void Patterns::isPrime()
{
	int n = 7;
	for (int i = 2; i <= std::sqrt(n); i++) {
		if (n % i == 0) {
			std::cout << "not prime";
			return;
		}
	}
	std::cout << "prime";
	return;
}

void Patterns::reverseNumber()
{
	int n = 1234;
	int reverse = 0;
	while (n != 0) {
		reverse = reverse * 10 + (n % 10);
		n = n / 10;
	}
	std::cout << reverse;
}

void Patterns::amstrongNumber()
{
	int n = 153;
	int amstrong = 0;
	int value = n;
	int original = n;
	int noOfDigits = 0;
	while (value != 0) {
		noOfDigits++;
		value = value / 10;
	}
	while (n != 0) {
		amstrong = amstrong + std::pow((n % 10),noOfDigits);
		n = n / 10;
	}
	if (amstrong == original) {
		std::cout << "amstrong number";
	}
	else {
		std::cout << "not amstrong number";
	}
}





