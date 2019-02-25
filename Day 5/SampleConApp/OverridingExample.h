#pragma once
#include<iostream>
#include<string>
using namespace std;
void print(string msg) {
	cout << msg << endl;
}
class TestClass {
protected:
	int val;
public:
	TestClass() : val(0)
	{
			
	}
	virtual void TestFunc() {
		val = 123;
		print("Test func is created in the base class");
	}
};
//We R Using Public inheritance. All the members of the base class will retain their access specifiers in the derived class also...
class DerivedTestClass : public TestClass {
public:
	//No change in the name, arg list or the return type....
	virtual void TestFunc() {
		TestClass::TestFunc();//Base version is called...
		print("Test Func is created by the derived class");//added further....

	}
	virtual void SecondTestFunc() {
		print("The value is " + to_string(val));
		print("Second Test func is called");
	}
};

