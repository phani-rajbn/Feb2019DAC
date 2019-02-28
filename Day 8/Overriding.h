#pragma once
#include<iostream>
#include<string>
#include<objbase.h>
using namespace std;

//Abstract classes in C++:
class AbstractClass {
public:
	void TestFunc() {
		print("Test Func implemented");
	}

	virtual void virtualFunc()=0;//pure virtual func is one kind of virtual function which is not implemented in its declared class and will be assigned to 0.
	//Now the class is incomplete, the compiler will not allow U to instantiate the object....
};
//A Class that has only pure virtual functions in it is called as Abstract Base class or simply Interface. All interfaces are abstract classes but all abstract classes are not interfaces as abstract classes can have normal and virtual implemented methods in it...
//In MS VC++, there is a typedef for an interface as struct, this is defined in a header file objbase.h which can be used to create an interface. PS: Other compilers dont support it...
interface DBOperations {
public:
	virtual void AddEmployee() = 0;
	virtual void UpdateEmployee() = 0;
	virtual void DeleteEmployee() = 0;
	virtual void GetAllEmployees(void** ppv) = 0;
};

class SqlDBOperations :public DBOperations {
public:
	// Inherited via DBOperations
	void AddEmployee()
	{
		print("Employee added to SQL server database");
	}

	void UpdateEmployee()
	{
		print("Employee updated to SQL server database");
	}

	void DeleteEmployee()
	{
		print("Employee deleted from SQL server database");
	}

	void GetAllEmployees(void ** ppv)
	{
		Fruit* pFruit = new Fruit;
		pFruit->setDetails("Apple", 123);
		*ppv = reinterpret_cast<void**>(&pFruit);
	}
};


class DerivedAbstractClass :public AbstractClass {
public:
	void virtualFunc() {
		print("Must be Implemented in the derived class");
	}
};

class SuperClass {
public:
	virtual void SuperFunc() {
		print("Super Func is called");
	}
};

class DerivedSuperClass: public SuperClass {
public:
	void SuperFunc() {//Modify the existing func of the base
		print("Modified Super Func is called");
	}
};


class Display {
public:
	int d1;
	string d2;
	friend ostream &operator<<(ostream &output, const Display& display) {
		output << display.d2 <<" with "<< display.d1;
		return output;
	}
};