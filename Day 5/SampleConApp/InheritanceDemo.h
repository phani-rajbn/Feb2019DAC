#pragma once
#include<iostream>
#include<string>
using namespace std;
/*
 Inheritance is a feature of OOP based on the Open-Closed Principle to extend the functionalities of a class into another for either extending the methods or modifying the existing ones. Inheritance also helps in Runtime polymorphism...
 The class that extends the functionality is called as the child class or the derived class, the class which is being extended is called as the base class or the parent class. 
*/
void print(string info) {
	cout << info << endl;
}
//base class....
class Father {
protected://available within the class and its derived class...
	int savings;	
public:
	Father() :savings(0)
	{
			
	}
	void MakePayment(string cstName, double amount) {
		savings += (amount * 10 / 100);
		print("The Customer " + cstName + " has made a payment of Rs. " + to_string(amount));
	}
};
//: Access-specifier ClassName UR Extending....
//In public inheritance, all the public and protected members will be retaining their access-specfiers in the derived class, private members are inaccessible to the derived class...
//When an access specifier is defined as private during inheritance, its called private inheritance and all the members of the base class will become private to the derived class and so the objects of the derived class cannot access any of the members of the base class including the public ones...

//derived class.
class Son : /*public*/private Father {
public:
	void MakeMyCustomPayments(string name, double amount) {
		Father::MakePayment(name, amount);
	}
	void Purchase(string item, double amount) {
		string res;
		if (savings > amount) {
			savings -= amount;
			res = "The Item " + item + " has been purchased taking from my father's savings for Rs. " + to_string(amount);
		}
		else
			res = "The Item " + item + " has been purchased for Rs. " + to_string(amount);
		print(res);
		print("The current savings with us: " + to_string(savings));
	}
};

