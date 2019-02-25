#pragma once
#include<iostream>
#include<string>
using namespace std;
//vTable binding in C++...
//When a set of virtual functions are created in a class, the functions will be represented as an array of Function pointers. These pointers will point to a function that is implementing it at runtime. This Array is represented as table of Addresses called as V-Table. Virtual (Function) Table.
class BaseClass {
public:
	virtual void BaseFunc() {
		cout << "Base func is called" << endl;
	}
};

class BaseClass2 {
public:
	virtual void AnotherFunc() {
		cout << "Base func2 is called" << endl;
	}
};
//Derived class can be derived from multiple base classes at the same level
class DerivedClass :public BaseClass, public BaseClass2 {
public:
	void BaseFunc() {//Method overriding...
		cout << "BaseFunc reimplemented thro Derived" << endl;
	}

	void AnotherFunc() {
		cout << "Base func2 is reimplemented thro Derived" << endl;
	}
};

int main() {
	//BaseClass* pCls;//variable creation
	//pCls = new BaseClass;//instantiation
	//pCls->BaseFunc();//Function invocation...
	//delete pCls;
	//pCls = new DerivedClass;
	//pCls->BaseFunc();
	//delete pCls;

	//2nd example to show dynamic invocation....
	BaseClass* ptr = new DerivedClass();
	ptr->BaseFunc();//This will call the overriden basefunc....

	BaseClass2* ptr2 = (BaseClass2*)ptr;//copy.....
	ptr2->AnotherFunc();
}
/*Shortcut keys for debugging:
Debugging is a process of resolving runtime Errors by walking thro the flow of the program in a step by step manner there by analysing the variables, function calls, scopes, references and many other components of the Application and making changes appropriately to make a execution.
To start the debugging from the start up line: F10
To debug from a certain location, U should set a break point on that line where U wish to start the debuging.Press F9 to create a break point.
To start the debugging press F5(Not Ctrl+F5).
When the break point is hit, press F11 to get into a function statement or F10 to execute the statement. 
Use various debugging windows provided by the VS to analyse the variables and other components of the Application. 
*/