#pragma once
#include<iostream>
#include<string>
using namespace std;

void print(string msg) {
	cout << msg << endl;
}

class BaseClass {
protected:
	void FamilyFunc() {
		print("Available within the class and its derived Classes");
	}
public:
	void BaseFunc() {
		print("Base Func is called");
	}
};
//inheritance in C++->public, private or protected inheritance
/*
When the class is inherited public:
All public members become public members of the derived
All private members will be inaccessible to the derived
All protected members will become protected members of the derived.

When the class is inherited as private:
All members other than private will be private to the derived class. The base class members will be inaccessible to the derived class objects. However they can be called within the derived class thro any of their member functions.

When the class is inherited as protected:
All the members other than private will become protected to the derived class. The base class members will be available to the derived classes and can further be extended to its derived in the hirarchy.
*/
//Multiple inheritance in C++ is an unique feature where a class be derived from multiple base classes at the same level. By this the derived class gets all the features of both the base classes at one level only. 
class BaseType {
public:
	virtual void Super() {
		print("Super Type which is base class for all");
	}
};

class Example : public virtual BaseType {
public:
	void ExampleFunc() { print("Example Func"); }
};

class Simple : public BaseType{
public:
	void Super() {
		BaseType::Super();//Calling the base version....
		print("More implementation....");
	}
	void SimpleFunc() { print("Simple Func"); }
};

class SimpleExample : public Simple, public Example {
public:
	void SimpleExampleFunc() {
		print("Simple and Example func");
	}
};


class DerivedClass : protected BaseClass {
public:
	void DerivedFunc() {
		BaseFunc();//U can still call the base class function...
		FamilyFunc();//Private to the derived class
		print("Derived Func is called");
	}
};

class SecondDerivedClass : protected DerivedClass {
public:
	void GenExFunc() {
		FamilyFunc();//base class's private fn is not accessible...
	}
};
