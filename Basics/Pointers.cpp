#include "Pointers.h"
using namespace std;
void Pointers::pointerBasics()
{
	int a = 10;
	int* ptr;
	ptr = &a;

	std::cout << a <<" Value of a"<< std::endl;
	std::cout << &a <<" Address of a" << std::endl;
	std::cout << ptr <<" Address of a"<< std::endl;
	std::cout << *ptr << " Value of *ptr" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	*ptr = 20;

	std::cout << a << " Value of a" << std::endl;
	std::cout << *ptr << " Value of *ptr" << std::endl;
}

void Pointers::pointerArthematic()
{
	//  ptr++ (int takes 4 bytes,char takes 1 byte) (goes to next memory location)
	int a = 10;
	int* ptr;
	ptr = &a;

	std::cout << ptr << " Value of ptr" << std::endl;
	ptr++;
	std::cout << ptr << " Value of ptr" << std::endl;

	// ptr in arrays
	int array[] = { 10,20,30 };
	cout << *array <<endl; //gives 0th index value in array
	
	//print array using ptr
	ptr = array;

	for (int i = 0; i < 3; i++) {
		//cout << *ptr << " ";
		//ptr++;
		cout << *(array+i) << " ";
		//array++; //illegal, array is a constant pointer
	}
}


void Pointers::pointerOfPointer()
{
	int a = 10;
	int* ptr;
	ptr = &a;
	// (int*)* q - (type)* q
	int** q = &ptr;

	cout << *q << endl;
	cout << **q << endl;
	int b = 20;
	swap(&a, &b);
}

void Pointers::swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}







