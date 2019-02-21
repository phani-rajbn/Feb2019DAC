#include "Employee.h"
#include"CommonFunctions.h"
using namespace std;
void creatingEmpCode() {
	cout << "Creating a new Employee" << endl;
	Employee emp;//Create an object of the Employee
	emp.SetDetails(123, "Phaniraj", "Bangalore");
	emp.GetDetails();
}

void callAddFunc() {
RETRY:
	try
	{
		auto res = AddFunc(123, 234);
		cout << "The result is :" << res << endl;
	}
	catch (const std::exception&)
	{
		cout << "OOPs! Something wrong happend" << endl;
		cout << exception::exception().what();
		goto RETRY;
	}
}
void passByValueExample() {
	int firstValue = 123;
	cout << "The Value before passing to the func: " << firstValue << endl;
	firstValue = TestFunc(firstValue);
	cout << "The Value after passing to the func: " << firstValue << endl;
}
void main() {
	int add = 0, sub = 0;//declare and assign a value before sending it to the function...
	mathOperation(13, 12, add, sub);
	cout << "The added value is " << add << "\nThe Subtracted Value: " << sub << endl;
}