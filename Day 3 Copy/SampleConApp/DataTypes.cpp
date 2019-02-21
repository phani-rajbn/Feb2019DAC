#include<iostream>
using namespace std;
void main() {
	//data types are nothing but types of data that U want to store in uR Application for a brief period of Time.  The data types are used to create variables, which define the amount of memory that has its own name and a value associated with it.  Each data type has a {Range} that allows to store the kind of data.  C++ supports a lot of primitive data types that is common among all the programming languages: int, short. long. float, double, char, bool, and a host of custom data types. There are even unsigned version(Holds only Positive numbers) of these types. 
	//int(4 Bytes), bool(1 byte), char(1), short(2), long(4), long long(8), float(4), double(8). Refer the documentation for the actual range of each of the data type and its unsigned version...
	cout << "Enter the Age"<<endl;//<< is an Operator to display on the output device. endl is an object to move to the next line. Every statement in C++ is ended with a ; 
	int age = 0;//good to initialize the variables before U use..
	cin >> age;
	cout << "The User has entered " << age << endl;

	cout << "Enter the Name please" << endl;
	char strName[100];//random size...
	cin >> strName;
	cout << "The name entered is " << strName << endl;

 }