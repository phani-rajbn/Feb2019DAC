#pragma once
#include<iostream>
using namespace std;
double getDouble(char question[]) {
	double dValue = 0.0;
	cout << question << endl;
	cin >> dValue;
	return dValue;
}

char getChoice(char question[]) {
	cout << question << endl;
	char choice;
	cin >> choice;
	return choice;
}
double addFunc(double v1, double v2) {
	return v1 + v2;
}
double performOperation(double v1, double v2, char choice) {
	double res = 0.0;
	switch (choice)
	{
	case '+':
		res = addFunc(v1, v2);//+ operator is used to add 2 numbers
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
		cout << "Invalid choice" << endl;
		break;//new in C++ 7.0 to allow break after default...
	}
	return res;
}