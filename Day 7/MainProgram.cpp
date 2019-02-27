#include "MainProgram.h"

int Fruit::noOfFruits = 0;
//C++ does not have a feature to initialize the static members within the class, so U should declare it outside the class by using the type declaration with the classname followed by the ::(Scope resolution operator) and the name of the variable...
void firstExample()
{
	cout << "Welcome to C++" << endl;
	cout << "Enter v1" << endl;
	double v1, v2, res;//creating 3 variables of the same type...
	cin >> v1;
	cout << "Enter v2" << endl;
	cin >> v2;
	res = v1 + v2;
	cout << "The result " << res << endl;
}

void secondExample() {
	cout << "Enter the name" << endl;
	char strContent[100];
	cin >> strContent;
	cout << "The name is " << strContent << endl;
}

void arraysExample() {
	int nos[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the value" << endl;
		cin >> nos[i];
	}
	int i = 0;
	while (i < 3) {
		cout << nos[i] << endl;
		i++;
	}
}
void pointerExample() {
	int x = 123;
	int* ptr = &x;//telling that its a variable that holds an address
	cout << "The Address: " << ptr << "\nThe Value: " << *ptr << endl;//Get the value associated with that address location..
	//& is used to get the address of a variable so that it would be assigned to a pointer..
}
void arrayOfPointers() {
	int* example = new int[10];
	for (int i = 0; i < 10; i++)
	{
		example[i] = i;
	}

	for (int i = 10 - 1; i >= 0; i--)//using for loop in reverse...
	{
		cout << example[i] << endl;
	}
	//limitations: arrays are fixed in size, should re-create an array if U want to increase or decrease the size. There are some C++ APIs to clone copy or copyto the contents of one array into another...
	//for dynamic array, Use the STL of c++ where we have data structures like vector, iterator, linkedList, stack and queue.
	//common points b/w arrays and pointers: Contigenous amount of memory, accessible thro a simple iterations, dynamic memory allocation. In other words, all arrays can be pointers.  
}
void charArrayExample() {
	char* strContent = "Welcome to Cpp training";
	int length = strnlen_s(strContent,100);
	for (int i = 0; i < length; i++)
	{
		cout << strContent[i];
	}
	//explore: strcat_s, strcmp_s, strcpy_s functions....
}

void createAndViewobject() {
	//stack object creation
	Fruit f;
	f.setDetails("Apple", 45);
	cout << "The Cost of " << f.getName() << " is Rs. " << f.getPrice() << endl;

	//creating using dynamic allocation...(Most prefered way)
	Fruit* ptr = new Fruit;
	ptr->setDetails("Mango", 55);
	cout << "The Cost of " << ptr->getName() << " is Rs. " << ptr->getPrice() << endl;
	delete ptr;//after the work is done, explicitly delete this...

}
void main() {
	//firstExample();
	//secondExample();
	//arraysExample();
	//pointerExample();
	//arrayOfPointers();
	//charArrayExample();
	createAndViewobject();
}