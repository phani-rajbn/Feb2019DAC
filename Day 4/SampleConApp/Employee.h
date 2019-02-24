#pragma once
#include<string>
using namespace std;
class Employee {
private:
	int empId;
	string empName;
	string empAddress;
public:
	void setDetails(int id, string name, string address);
	void getDetails();
};//Header files for declaration purpose only....