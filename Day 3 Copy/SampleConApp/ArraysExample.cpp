//Demo on Arrays in Cpp....
#include<iostream>
#include<string>//use this for creating strings based on STL....
#include"CommonFunctions.h"
using namespace std;
//Array is a collection of similar objects. Its fixed in Size and is allocated contigious memory..
void firstExample() {
	int elements[5];/*= { 45,56,54,34, 6 };*///Another way of creating array and intializing it with values...
	for (int i = 0; i < 5; i++)
	{
		elements[i] = getDouble("Enter value");
	}
	cout << "All the values are set" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << elements[i] << endl;
	}
}
void multiDimensionalArrayDemo() {
	int array2D[3][3];//3x3 Array...
	for (int i = 0; i < 3; i++) //rows...
	{
		for (int j = 0; j < 3; j++)//columns...
		{
			array2D[i][j] = i + j;
		}
	}

	cout << "Displaying the array in a matrix format...." << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << array2D[i][j] << " ";
		}
		cout << endl;
	}
}
void stringClassDemo() {
	string strInfo = "Welcome to C++ String class";
	string strDetail = "\nHow does this look?";
	string res = strInfo + strDetail;//copying and concatinating...
	cout << res << endl;
}
void stringDemo() {
	/*
	C++ supports 3 basic ways of creating and using strings.
	Using an Array of char elements. 
	Using string class.
	Using wchar_t for wide charecters.
	Array of charecters is a basically a string. It is also a char Pointer.A String is sequence of charecters. If char represents single charecter, then Array of char represents a string. Declartion/definitions are same like any other array...
	All strings in C++ are null terminating strings. The last element of the Array would be \0.
	We have string based operations in the form of string functions to perform assignments, copying , removing and so forth...
	strcpy is used to copy one charArray into another...
	*/
	char msg[] = "Welcome to C++ training";
	int length = strlen(msg);//store it into variable which cannot be used in declaring the char array....
	cout << "The length of the string is " << length << endl;
	char copy[50];
	strcpy_s(copy, msg);//the source and the destination should be of either the same size or longer than the source...
	//cout << msg << endl;
	//cout << copy << endl;
	//concatinating strings...
	//strcat_s(copy, msg);//Concatinate the strings. It adds to the destination from the source. 

	//Its possible to compare 2 strings...
	int res = strcmp(msg, copy);
	if (res == 0)
		cout << "They are same" << endl;
	else if (res < 0)
		cout << "msg is bigger than the copy" << endl;
	else
		cout << "msg is Smaller than the copy" << endl;
	//cout << copy << endl;
}
void main() {
	//firstExample();
	//multiDimensionalArrayDemo();
	//ThreeDArrayDemo();//Try it URSelf...
	//stringDemo();
	stringClassDemo();
 }