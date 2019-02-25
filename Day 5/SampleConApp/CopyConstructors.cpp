#pragma once
#include<iostream>
#include<string>
using namespace std;
//Copy Constructors: Create a new object as a copy of the existing object is called as COPY Constructor. The syntax uses the reference of the object as arg to the constructor. 
//The copy constructor copies all the values of all the member variables from an existing object to the new object in the form of member-member. 
//When is Copy constructor called? When an object is created based on other object of the same class. When the object of a class is passed as arg to a function. When an object of a class is returned by value . Also sometimes when the compiler creates temp objects of the class..
//Used widely when U work with pointers and dynamic memory allocations. if a class has pointer variables and they create the objects for those pointers dynamically, then it is a must to have a Copy Constructor for UR Class
//PS: By default,C++ provides a default Copy constructor even if U dont create one. Even then, we will create our own Copy constructor in situations like a pointer member variable to be dynamically creatable with our own logic. Else the default Copy Constructor will not have any logic of dynamic memory creation. 

class Employee {
private:
	int apple;
	char* strName;
public:
	Employee(int x, char* name)
	{
		apple = x;
		strName = name;
		cout << "Employee is created" << endl;
	}
	//copy constructor of our own...
	Employee(Employee &emp) {
		//deep copying where every variable is copied into an other by creating seperate instance of it....
		apple = emp.apple;
		strName = emp.strName;
		cout << "Calling Copy Constructor" << endl;
	}
	void ShowApple() {
		cout << "The Apple is " << apple << endl;
		cout << "The Name is " << strName << endl;
	}
	void setNewValue(char* strName) {
		this->strName = strName;
	}
};
//When an object is passed as arg to a function, a copy of the object will be passed into the function, thereby calling its Copy constructor...
void getResults(Employee emp) {
	emp.ShowApple();
}

Employee createEmployee(char* name, int no) {
	Employee emp(no, name);
	return emp;

}

int main() {
	/*Employee emp(123,"Phaniraj");
	Employee temp(emp);
	emp.setNewValue("NewName");
	emp.ShowApple();
	temp.ShowApple();*/
//	getResults(emp);

	Employee temp = createEmployee("Phaniraj", 123);
	//To create objects based on the existing objects: Copy Constructor...
}