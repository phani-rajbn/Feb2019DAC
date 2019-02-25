#pragma once
#include<iostream>
#include<string>
using namespace std;

//What is an Exception?An abnormal situation where the App fails to execute further due to anomalies in the program that might not make the App execute in a clean way...
//Exceptions are handled using catch in association with try blocks
//Any execution that could raise an Exception will be sourounded with a try block, if any exceptions are raised, will be handled by the catch block. U can have multiple catch blocks for a given try. C++ gives an exception class from which other exceptions are derived from. U could also create UR own custom Exceptions to suit ur requirements...
//try: represents the block of code that is to execute
//catch: represents the block of code that handles the exception
//throw: programmatic way of raising the exceptions in C++...
void main() {
	RETRY:
	try
	{
		int x = 0;
		cout << "Enter the value for x" << endl;
		cin >> x;
		if (x < 0)
			throw "Only positive numbers are expected";
		cout << "The Value of X: " << x << endl;
	}
	catch (int x)
	{
		cout << "The value should be positive number" << endl;
	}
	catch (char* strMessage) {
		cout << strMessage << endl;
		goto RETRY;
	}
	catch (...) {
		cout << "OOPS! Something wrong happened\nPlease try later" << endl;
	}
	cout << "U can still have other statements after the try" << endl;
}