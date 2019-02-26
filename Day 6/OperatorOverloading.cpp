#pragma once
#include<iostream>
#include<string>
using namespace std;
//Operator overloading is similar to Function overloading where one or more operators are redefined to work on their objects. U may use a + operator to add a salary for an employee, = operator to assign the data of one employee to other.
class Customer {
private:
	int billAmount;
public:
	Customer():billAmount(0)
	{

	}
	void PrintBill() {
		cout << "The Bill Amount: " << billAmount << endl;
	}

	Customer operator + (int amount) {
		Customer* cst = this;
		cst->billAmount += amount;
		return cst;
	}
	Customer operator +=(int amount) {
		this->billAmount += amount;
		return *this;
	}
	Customer operator -(int amount) {
		Customer* cst = this;
		if (billAmount < amount)
			throw "Amount cannot be deducted";
		cst->billAmount -= amount;
		return *cst;
	}

	/*Operator overloading is similar to any method overloading but with following features:
	The name of the method is operator followed by the operator U wish to overload.
	U can overload an operator within a class, as a global function and act like a friend to the class.
	Some of the operators that are usually accessors cannot be overloaded: ::, ., this, sizeof, ternary operator are a few operators U cannot overload.
	For operator overloading, atleast one of the operands should be the object on which U R doing the overloading. 
	= operator is defaultly created by the Compiler, but U could modify it to create deep copying.
	*/
};

void main() {
	Customer cst;
	cst = cst + 200;//I need a + operator to add amount to the bill rather than creating a new method to add amount to the bill...
	cst = cst + 150;
	cst = cst + 20;
	cst = cst + 400;
	cst = cst + 430;
	cst += 500;
	cst.PrintBill();
}
//U could overload a unary operator(usually within single object or no paramters), binary operator(2 Operands of which one is its own type). 
