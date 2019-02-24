#include"CommonFunctions.h"
//Demo on Pointers....
void addressOfExample() {
	int value = 100;
	//variable is created in a location called as address. An Address is a location within the memory of the process that UR running. 
	cout << "The Value: " << value << endl;
	cout << "The location: " << &value << endl;//& means an Address of
	//manipulating with addresses is what is called as pointers. The output will be different for different computers. 
	//Any variable U Create will have an address and that address is seen by using the address of operator called &.
	//Why addresses? Address is basically a variable on which certain features could be set. Any variable that is assigned to this address will automatically get all the features that U have defined for this address. It is also possible to assign the same address to different variables and perform operations with them 
	//U have 2 types of variable: for the value and one for the address..
	//Basically a variable that stores the addresses of other variables is called as POINTER. Pointers are said to "POINT TO" the variable whose address it stores.
}

void pointerExample() {
	int x = 123;//variable by name x that is located in a certain address..
//Now we need a variable to store the address of it, not the value..
	int* loc = &x;//variable that stores the address of x...
	cout << "The value " << x << " is stored at " << loc << endl;
	cout << "Loc holds the value " << *loc << endl;
	cout << "The address of the variable loc " << &loc << endl;
	//We can obtain the value the address holds in it thro * operator. This is called as DEREFERENCE OPERATOR(*).
}

void initializingValues() {
	int first, second;//Initialize these variables thro the pointer.
	int* addr;//create an address variable of the type int. This address can be used to store only the addresses of integer values...
	addr = &first;//set the address to the first variable...
	*addr = 123;//RaGa:set the value that is stored in this address to 123...
	cout << "The address of first:" << &first << " and addr is " << addr << endl;
	//What is the variable that is pointing to this address? first
	cout << "The value of first is " << first << endl;
	addr = &second;//NaMo
	cout << "The address of second:" << &second << " and addr is " << addr << endl;
	*addr = 23423;
	cout << "The value of second is " << second << endl;
	cout << "The value of first is " << first << endl;
}
void declaringPointers() {
	int *p1, *p2;//p1 and p2 are pointers..
	int first = 234, second = 345;//address are set to the pointers
	p1 = &first;
	p2 = &second;
	cout << "The value of p1:" << p1 << "\nThe value of p2:" << p2 << endl;
	cout << "The value of the address p1:" << *p1 << "\nThe value of the address p2 : " << *p2<<endl;
	p1 = p2;
	cout << "After assignment is done....." << endl;
	cout << "The value of p1:" << p1 << "\nThe value of p2:" << p2 << endl;
	cout << "The value of the address p1:" << *p1 << "\nThe value of the address p2:" << *p2<<endl;
}
void pointersWithArrays() {
	//Array is a contigenous memory of the same type. So are pointers...
	int val = 123;
	int* x = &val;
	//cout << "X: " << x;
	//x++;//using increment operator on the pointer...
	//cout << "X: " << x;

	//This means that an array can always be implicitly converted to a pointer of a proper type. 
	int myArray[5];
	int* myPointer = myArray; //The reverse is not the same....
	*myPointer = 10;//First index value becomes 10..
	myPointer++;//incremented to the next address..
	*myPointer = 20;//Now the next index will be 20;
	myPointer++;
	*myPointer = 30;
	myPointer++;
	*myPointer = 40;
	myPointer++;
	*myPointer = 50;
	/*myPointer++;
	*myPointer = 60;
	myPointer++;
	*myPointer = 70;
	myPointer++;
	*myPointer = 80;This wont work as the size of the array is 5, anything after that, pointer has an address which does not point to any valid variable,so its a null reference...*/
	for (int i = 0; i < 5; i++)
		print(to_string(myArray[i]));
}

void main() {
	//addressOfExample();
	//pointerExample();
	//initializingValues();
	//declaringPointers();
	pointersWithArrays();
	//Relate this to char* and char[]. See how void* works...
}