#pragma once
#include<iostream>
using namespace std;
class Student
{
	string name;
	int age;
	bool gender;
	//by default they are private
	
public:
	//constructors default constructor exists only when there is no constructor decalred

	Student();	//need to specify def constructor to call defalut constructor if any other constructor is defined
	explicit Student(string s); //parameterized constructor
	Student(string s,int age,bool gender);

	//we will have a default copy constructor

	Student(Student& a);

	~Student(); //destructor (cannot have any parameters)

	//operator overloading
	bool operator == (Student& a);
	Student operator + (Student& obj);

	void setName(string s);
	string getName()const;
	void printInfo()const;


	//Function overlaoding
	void fun();
	void fun(int a);
	void fun(string str);
};

