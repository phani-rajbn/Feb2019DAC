#include "MainProgram.h"
#include"Classes.h"
#include"Overriding.h"
#include"vTableBinding.h"
#include<fstream>
using namespace std;

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
	//pointer means address. I will interact with address rather than single variable...
	int x = 123;//A variable by name called x is created with a value as 123. Very variable will internally have an address...
	int* ptr;//telling that its a variable that holds an address of any variable of the type int...
	ptr = &x;//U R setting the address of x to ptr. 
	*ptr = 456456;//U R setting the value associated with this address to 456456..
	cout << "The Address: " << ptr << "\nThe Value: " << *ptr << endl;//Get the value associated with that address location..
	//& is used to get the address of a variable so that it would be assigned to a pointer..
	cout << "The value of x: " << x << endl;
}
void arrayOfPointers() {
	int* example = new int[10];
	//cout << "The value of example[0] is " << example[0] << endl;
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

void createMultipleObjects() {
	Fruit* fruits = new Fruit[3];
	for (int i = 0; i < 3; i++)
	{
		Fruit fr;
		string name;
		int cost;
		cout << "Enter the fruit Name:" << endl;
		cin >> name;
		cout << "Enter the cost" << endl;
		cin >> cost;
		fr.setDetails(name, cost);
		fruits[i] = fr;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << fruits[i].getName() << endl;
	}
}
//U R not passing the value, but passing the variable itself
void callByValue(int& val) {
	cout << "Value passed: " << val << endl;
	val = 321;
	cout << "Value after changing inside: " << val << endl;
}

void callByPointer(int* ptr) {
	*ptr = 432;
}

void createAndUseObjects() {
	BaseClass* pCls = new BaseClass();
	pCls->BaseFunc();

	DerivedClass* pDiv = new DerivedClass();
	//pDiv->BaseFunc();//Base Func becomes private to the Derived class if the BaseClass is inherited as private....
	pDiv->DerivedFunc();
	
	
}

void multipleInheritanceExample() {
	BaseType* pBase = (Simple*)new SimpleExample();//Diamond Ring Problem where the object is in a dilema of choosing the version of the inheritance as 2 base classes are derived from the same type.
	pBase->Super();

	Example* pEx = new SimpleExample();
	pEx->ExampleFunc();

	Simple* pSim = new SimpleExample();
	pSim->SimpleFunc();

	SimpleExample* pSimEx = new SimpleExample();
	pSimEx->SimpleExampleFunc();
}
void methodOverridingExample() {
	SuperClass* pCls = new DerivedSuperClass();
	pCls->SuperFunc();//Which version will be called?

}

void abstractClassExample() {
	AbstractClass* pClass = new DerivedAbstractClass();
	pClass->TestFunc();
	pClass->virtualFunc();

}
void fileWriting() {
	/*There are 3 objects to work with Files:
	ofstream: File output operations to a file.
	ifstream: Inputs to a file...
	fstream: both input and output to the file...
	All are available under the header file fstream
	*/
	ofstream out("TestingCode.txt");
	if (!out) {
		cerr << "OOPs! Something wrong happened" << endl;
		exit(1);
	}
	out << "This is example1" << endl;
	out << "This is example2" << endl;
	out << "This is example3" << endl;
	out << "This is example4" << endl;
	out.close();

}

void fileReading() {
	//File reading is exactly the opposite, we use getLine to read the line...
	ifstream in("TestingCode.txt");
	if (!in) {
		cerr << "OOPs! File reading is not possible" << endl;
		exit(1);
	}
	while (in) {
		string content;
		//in >> content;//Reads Each word ....
		getline(in, content);
		cout << content << endl;
	}
	in.close();
}
void vTableBinding() {
	MathComponent* pMath = new MathComponent();
	int res;
	pMath->addFunc(123, 234, &res);
	print("Added: " + to_string(res));

	pMath->subFunc(123, 23, &res);
	print("subtracted: " + to_string(res));

}
void main() {
	//firstExample();
	//secondExample();
	//arraysExample();
	//pointerExample();
	//arrayOfPointers();
	//charArrayExample();
	//createAndViewobject();
	//createMultipleObjects();
	//callByValue(x);
	//createAndUseObjects();
	//multipleInheritanceExample();
	//methodOverridingExample();
	//abstractClassExample();
	//operatorOverloadingDemo();
	//fileWriting();
	//fileReading();
	vTableBinding();
}

void operatorOverloadingDemo()
{
	Display display;
	display.d1 = 123;
	display.d2 = "Test123";
	cout << display << endl;
}
