#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
	// ID to represent the employee
	int empID;
	string empName;
	string empAddress;
public:

	void SetDetails(int id, string name, string address)
	{
		empID = id;
		empName = name;
		empAddress = address;
	}

	// Displays the details to the User
	void GetDetails()
	{
		cout << "The Name entered is " << empName << " from " << empAddress << " with an id " << empID;
	}
};

