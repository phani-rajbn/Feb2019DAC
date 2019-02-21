//Demo on classes:
//classes are user defined types that perform both data operations and storing of it. If U have data of one or more types to be represented as a single unit, then U can go for class. 
#include<iostream>
#include<string>
#include"CommonFunctions.h"
using namespace std;
//Data of the class is usually hidden. They are private. U create public functions to manipulate the data. This includes both assignments and retrivals. 

class Employee {
private:
	int empID;//camel casing....
	string empName;
	string empAddress;
public:
	void SetDetails(int id, string name, string address) {
		empID = id;
		empName = name;
		empAddress = address;
	}

	int getEmpID() {
		return empID;
	}

	string getName() {
		return empName;
	}

	string getAddress() {
		return empAddress;
	}

	void getDetails() {
		cout << "The name is " << empName << endl;
		cout << "The Address is " << empAddress << endl;
		cout << "The ID is " << empID << endl;
	}
};
class Operation {
public:
	double v1, v2, res;
	char op;
	void Calculate() {
		res = performOperation(v1, v2, op);
	}
};//U R Defining UR data type...
class Trainee {
public:
	int id;
	string strName;
	string strAddress;
	long phoneNo;	//These variables are scoped to the class it is declared
};
void createAndUseTrainee() {
	Trainee tr;
	tr.id = 123;
	tr.strName = "Phaniraj";
	tr.strAddress = "Bangalore";
	tr.phoneNo = 234243;
	string info =  "The name is " + tr.strName + " from " + tr.strAddress + "\nHis phone no is " + to_string(tr.phoneNo);
	cout << info << endl;

}

void createAndUseEmployee() {
	Employee emp;
	emp.SetDetails(123, "Phaniraj", "Bangalore");
	emp.getDetails();
}
void main() {
	char strName[100];
	cin >> strName;
	cout << strName << endl;
	//createAndUseEmployee();
	//createAndUseTrainee();
	//The variable of UR Class in OOP terminology means an object. An object is an instance of the class. 
	/*Operation firstDemo;
	firstDemo.v1 = 123;
	firstDemo.v2 = 524;
	firstDemo.op = '+';
	firstDemo.Calculate();
	cout << "The result " << firstDemo.res << endl;*/
}