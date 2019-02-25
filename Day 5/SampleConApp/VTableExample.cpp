#pragma once
#include<iostream>
#include<string>
using namespace std;

class Example {
public:
	virtual void ExFun() = 0;
};

class Simple {
public:
	virtual void SimFun() = 0;
};
class ExampleCode :public Example, public Simple{
public:
	virtual void ExFun() {
		cout << "Ex Func" << endl;
	}
	virtual void SimFun() {
		cout << "Sim Func" << endl;
	}
};

class Fruit {
public:
	string name;
};
Fruit fruits[2];

bool processMenu(int choice) {
	if (choice == 1) {
		for (int i = 0; i < 2; i++)
		{
			if (fruits[i].name == "") {
				cout << "Enter the fruit name" << endl;
				cin >> fruits[i].name;
				return true;
			}
		}
		cout << "No further fruits can be added" << endl;
	}
	else if (choice == 2) {
		for (int i = 0; i < 2; i++)
		{
			if (fruits[i].name != "") {
				cout << fruits[i].name << endl;
			}
		}
		return true;
	}
	else return false;

}
void main() {
	Fruit* pFruit = new Fruit[10];
	for (int i = 0; i < 10; ++i)
	{
		pFruit[i].name = "Fruit" + to_string(i);
	}
	for (int i = 10 - 1; i >= 0; i--)
	{
		cout << pFruit[i].name << endl;
	}
	//const int size;
	
	int choice = 0;
	bool processing = true;
	do {
		cout << "Press 1 to add Fruit and 2 to View fruits" << endl;
		cin >> choice;
		processing = processMenu(choice);
	} while (processing);
}

