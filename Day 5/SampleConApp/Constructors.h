#pragma once
#include<iostream>
#include<string>
using namespace std;
//In OOP, when we create we might wish to inject the dependencies for the object to be usable. When an object is created, a function gets invoked automatically where we could write statements related to the variable assignments and object creations(Composing objects). C++ does not have default values to its members, so constructor would be the right place to initialize the members of the class. 
//Constructor is a function, it looks like any other method with the following rules: The name of the class and the method is same. It will not have any return types(not even void). It can have parameters like any other method. 
//Initialization list is a feature in C++ where we can intialize our data members before the constructor is called, it is also used to call the specific version of the base class constructors if they are overloaded(Multiple constructors differing by their parameters)
//The practical usage of a constructor in OOP is to provide instantiations of composite objects within the class. If Car and Radio are 2 classes where Car class contains the Radio class object, we will use a constructor to intialize the Radio object while the Car is being created. 
//Like a constructor, a destructor is a sp function that is called when an object is destroyed. When the object is removed from the memory, then it is said that the object has been destroyed. This function will be always executed when the runtime is destroying the object. It is typically used to free allocated memory, close or dispose the used resources of the object before we destroy it, else it might lead to memory leaks
//The syntax is similar to constructor but prefixed with a tilde(~). The destructors are invoked while the object is being destroyed, so no parameters are allowed. 
class Person {
private:
	string firstName;
	string lastName;
	int yearOfBirth;

public:
	//Initialization list can also be used to call other constructors of the same class...
	Person() : firstName(""), lastName(""), yearOfBirth(0)//Person("","",0)
	{
		cout << "Default Constructor" << endl;
	}

	Person(string firstName, string lastName, int yearOfBirth) :Person()
	{
		//If U have the parameter name as well as the data member names same, U could refer the data member name using this operator....
		this->firstName = firstName;
		this->lastName = lastName;
		this->yearOfBirth = yearOfBirth;
		cout << "Person object created with parameters" << endl;
	}

	void Print() {
		cout << "First Name: " << firstName << endl;
		cout << "Last Name: " << lastName << endl;
		cout << "Year of Birth: " << yearOfBirth << endl;
	}
	//Copy constructor will be discussed later...

	~Person() {//destructor is a block with the same name of the class prefixed with a tilde
		cout << "The Person object " <<this->firstName <<" is removed from the memory" << endl;
	}
};
//Explore how objects are created and destroyed in an inheritance scenario...