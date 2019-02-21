#pragma once
#include<iostream>
#include<string>
using namespace std;

void apple() {
	cout << "Apple" << endl;
}
///Function to add 2 numbers
double addFunc(double first, double second) {
	//apple();//parenthesis is the formal way to call a function...
	return first + second;
}

double subFunc(double first, double second) {
	return first - second;
}
double mulFunc(double first, double second) {
	return first * second;
}
double divFunc(double first, double second) {
	return first / second;
}

double processOperation(double x, double y, char operand) {
	switch (operand){
	case '+':
		return addFunc(x, y);
	case '-':
		return subFunc(x, y);
	case '*':
		return mulFunc(x, y);
	case '/':
		return divFunc(x, y);
	}
	return 0.0;
}

//////////////////For IO operations/////////////////////////
double getDouble(char question[]) {
	cout << question << endl;
	double ans = 0.0;
	cin >> ans;
	return ans;
	
}

char getChar(char question[]) {
	cout << question << endl;
	char ans;
	cin >> ans;
	return ans;
}
string getAnswer(char question[]) {
	char strAnswer[100];
	cout << question << endl;
	cin >> strAnswer;
	return strAnswer;
}
////////////////////////////////////////////////////////////
/*
Create the math calc program that performs like a calc which should exit onlyn when the user wishes to do so.
Create a program in C++ that takes a string as arg and convert the string in a reverse order. 
Create a program to store the info about a Customer of a billing Software.
Let the Software have an array of Customer of size 10, where the User will have options to add new Customer details, and display all the customer details. (AddCustomer) and (ViewAllCustomers)
*/
//POINTERS in C++ and Operator Overloading, Intro to OOPs...