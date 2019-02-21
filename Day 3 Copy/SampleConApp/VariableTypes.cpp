#include<iostream>
#include "CommonFunctions.h"
using namespace std;
//double and float are used specifically for decimal values. They are of higher presecion and will hold upto exponential levels.
//double getDouble(char question[]) {
//	double dValue = 0.0;
//	cout << question << endl;
//	cin >> dValue;
//	return dValue;
//}
//
//char getChoice(char question[]) {
//	cout << question << endl;
//	char choice;
//	cin >> choice;
//	return choice;
//}
//
//double performOperation(double v1, double v2, char choice) {
//	double res = 0.0;
//	switch (choice)
//	{
//	case '+':
//		res = v1 + v2;//+ operator is used to add 2 numbers
//		break;
//	case '-':
//		res = v1 - v2;//- operator is used to Subtract 2 numbers
//		break;
//	case 'X':
//		res = v1 * v2;//* operator is used to multiply 2 numbers
//		break;
//	case '/':
//		res = v1 / v2;// / operator is used to divide 2 numbers
//		break;
//	default:
//		cout << "Invalid choice" << endl;
//		break;//new in C++ 7.0 to allow break after default...
//	}
//	return res;
//}

void main() {
	/***************Code without modularity*********************
	//U have a possibility of declaring multiple variables of the same type in the same line 
	double v1 = 0.0, v2 =0.0, res =0.0;
	char operation;
	//U should initialize the variables before use as a good practise.
	cout << "Enter the value for the first operand";
	cin >> v1;

	cout << "Enter the value for the second operand";
	cin >> v2;

	cout << "Enter the required operation as + / - / X / /";
	cin >> operation;

	switch (operation)
	{
	case '+':
		res = v1 + v2;//+ operator is used to add 2 numbers
		break;
	case '-':
		res = v1 - v2;//- operator is used to Subtract 2 numbers
		break;
	case 'X':
		res = v1 * v2;//* operator is used to multiply 2 numbers
		break;
	case '/':
		res = v1 / v2;// / operator is used to divide 2 numbers
		break;
	default:
		cout<<"Invalid choice"<<endl;
		break;//new in C++ 7.0 to allow break after default...
	}
	cout << "The result of this operation is " << res << endl;
	***************Code with modularity**************************/
	char strTitle[100];
	strcpy_s(strTitle, "MATH CALCULATOR PROGRAM");
	//cout << strTitle << endl;
	cout << "MATH CALCULATOR PROGRAM" << endl;
	double v1 = getDouble("Enter v1");
	double v2 = getDouble("Enter v2");
	char choice = getChoice("Enter the choice: + or - or X or /");
	double res = performOperation(v1, v2, choice);
	cout << "The result is " << res << endl;
 }