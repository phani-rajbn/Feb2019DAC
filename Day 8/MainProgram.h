#pragma once
#include<iostream>
#include<string>
using namespace std;
class Fruit
{
private:
	string name;//data will be usually private, inaccessible outside the class declaration, cannot be used even by the objects of this class. 
	int price;
	static int noOfFruits;
public:
	void setDetails(string name, int cost) {
		this->name = name;
		//this operator is a pointer reference to the instance of the class and is usually used to refer the member variables when there is a naming conflict within a function scope. 
		price = cost;
	}
	//public members are available across the Application, usually used to access the private members thro them. 
	string getName() {
		return name;
	}
	int getPrice() {
		return price;
	}
};

void operatorOverloadingDemo();
