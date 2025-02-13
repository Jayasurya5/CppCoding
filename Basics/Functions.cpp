#include "Functions.h"
#include <string>
Functions::Functions()
{
}

Functions::~Functions()
{
}

bool Functions::isPrime(int value)
{
	for (int i = 2; i <= std::sqrt(value); i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}

void Functions::getPrimesBelowN(int n)
{
	for (int i = 2; i <= n; i++) {
		if (isPrime(i)) {
			std::cout << i << " is a prime number" << std::endl;
		}
	}
}

void Functions::fibbanociSeries(int n)
{
	int firstNumber = 1;
	int secondNumber = 1;
	int sum = 0;
	while (sum < n) {
		sum = firstNumber + secondNumber;
		firstNumber = secondNumber;
		secondNumber = sum;
		std::cout << firstNumber << std::endl;
	}
}

int Functions::factorialNumber(int n)
{	
	int i = 1;
	int fact = 1;
	while (i <= n) {
		fact = fact * i;
		i++;
	}
	return fact;
}

int Functions::nCr(int n,int r)
{
	// nCr = n!/ (n-r!)* r!
	int nCrValue = factorialNumber(n) / (factorialNumber(n - r) * factorialNumber(r));
	return nCrValue;
}

void Functions::pascalTriangle()
{
	int n = 5;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			std::cout << " " << nCr(i,j);
		}
		std::cout << std::endl;
	}
}

// sum of first n natural numbers -> n(n+1)/2

void Functions::checkPythogranTriplet()
{
	int x = 3, y = 4, z = 5;
	bool isTriplet = false;
	if (x > y && x > z) {
		isTriplet = isPythogorus(x, y, z);
	}
	else if (y > z) {
		isTriplet = isPythogorus(y, x, z);
	}
	else {
		isTriplet = isPythogorus(z, x, y);
	}

	if (isTriplet) {
		std::cout << " True";
	}
	else {
		std::cout << "False";
	}
	
}

bool Functions::isPythogorus(int a, int b, int c)
{
	if (a * a == (b * b + c * c)) {
		return true;
	}
	return false;
}

void Functions::binaryToDecimal()
{
	int binary = 10001; 
	int decimal = 0;
	int x = 1;
	while (binary) {
		decimal = decimal + (binary % 10) * x;
		x = x * 2;
		binary = binary / 10;
	}
	std::cout << decimal;
}

void Functions::octalToDecimal()
{
	int	octal = 100;
	int decimal = 0;
	int x = 1;
	while (octal) {
		decimal = decimal + (octal % 10) * x;
		x = x * 8;
		octal = octal / 10;
	}
	std::cout << decimal;
}

void Functions::hexaToDecimal()
{
	std::string hexaNumber = "1A";
	int size = hexaNumber.size();
	int decimal = 0;
	int x = 1;
	for (int i = size - 1; i >= 0; i--) {
		if (hexaNumber[i] >= '0' && hexaNumber[i] <= '9') {
			decimal = decimal + (hexaNumber[i] - '0') * x;
		}
		else if (hexaNumber[i] >= 'A' && hexaNumber[i] <= 'F') {
			decimal = decimal + (hexaNumber[i] - 'A'+ 10) * x;
		}
		x = x * 16;
	}
	std::cout << decimal;
}

void Functions::decimalToBinary()
{
	int decimal = 5;
	int binary = 0;
	int x = 1;
	while (decimal) {
		int value = decimal % 2;
		binary = binary + value * x;
		x = x * 10;
		decimal = decimal / 2;
	}
	std::cout << binary;

}

void Functions::decimalToOcta()
{
	int decimal = 10;
	int octa = 0;
	int x = 1;
	while (decimal>0) {
		int value = decimal % 8;
		octa = octa + value * x;
		x = x * 10;
		decimal = decimal / 8;
	}
	std::cout << octa;

}

void Functions::decimalToHexa()
{
	int decimal = 100;
	std::string hexa = "";
	while (decimal > 0) {
		int value = decimal % 16;
		if (value > 0 && value <= 9) {
			hexa = hexa + std::to_string(value);
		}
		else {
			char val = value + 'A' - 10;
			hexa.push_back(val);
		}
		decimal = decimal / 16;
	}
	std::cout << hexa;
}

void Functions::addTwoBinary()
{
	int binary1 = 1010;
	int binary2 = 1101;
	int x = 1;
	int addedNumber = 0;
	int sum = 0, carry = 0;
	while (binary1 > 0 || binary2 > 0) {
		int value1 = binary1 % 10;
		int value2 = binary2 % 10;
		
		int adder = value1 + value2 + carry;
		switch (adder) {
		case 0:
			sum = 0;
			carry = 0;
			break;
		case 1:
			sum = 1;
			carry = 0;
			break;
		case 2:
			sum = 0;
			carry = 1;
			break;
		case 3:
			sum = 1;
			carry = 1;
			break;
		}

		addedNumber = addedNumber + sum * x;
		x = x * 10;
		binary1 /= 10;
		binary2 /= 10;
	}
	addedNumber = addedNumber + carry * x;
	std::cout << addedNumber;
}












