#include "Student.h"


Student::Student() {
	cout << "default constructor called" << name << endl;
}
Student::Student(string s) {
	name = s;
	cout << "Name = " << name << endl;
}
Student::Student(string s, int age, bool gender) {
	cout << "parameterized constuctor called" << endl;
	this->name = s;
	this->age = age;
	this->gender = gender;
	printInfo();
}
//we cannot pass any parameters or return type to destructor
Student::~Student() {
	cout << "Desturctor called" << endl;
	//called when object is destroyed
}

//we will have a default copy constructor 
//but it will do shallow copy
//copy constructor
Student::Student(Student& a) {
	this->name = a.name;
	this->age = a.age;
	this->gender = a.gender;
	cout << "Copy constuctor called" << endl;
} // Student c = a;


//operator overloading
bool Student::operator == (Student& a) {
	if (this->name == a.name && this->age == a.age && this->gender == a.gender) {
		return true;
	}
	return false;
}


void Student::setName(string s) {
	name = s;
}
string Student::getName()const {
	return name;
} 
void Student::printInfo()const {
	cout << "Name = " << name << endl;
	cout << "Age = " << age << endl; 
	cout << "Gender = " << gender << endl;
}


//function overlaoding
void Student::fun() {

}
void Student::fun(int a){
}
void Student::fun(string str) {

}

//operator overloading
Student Student::operator + (Student& obj) {
	Student stu;
	stu.age = this->age + obj.age;
	return stu;
}

//runtime polymorphism
// BaseClass* basePtr;
//DerivedClass derived;
//basePtr = &derived;
//basePtr->print();   prints base class pointer
//make print virtual in base class prints derived class pointer