#include"CommonFunctions.h"
#include"Employee.h"

//U write the implementations...
void Employee::setDetails(int id, string name, string address) {
	empId = id;
	empName = name;
	empAddress = address;
}
 void Employee::getDetails() {
	print("The Name of the Employee is " + empName);
	print("The Address of the Employee is " + empAddress);
	print("The ID of the Employee is " + empId);
}