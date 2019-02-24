#pragma once
#include<iostream>
#include<string>
using namespace std;

void TestFunc(string name) {
	cout << name;
}

string getName(string question) {
	string strName = "";
	cout << question << endl;
	cin >> strName;
	return strName;
}

void print(string msg) {
	cout << msg << endl;
}