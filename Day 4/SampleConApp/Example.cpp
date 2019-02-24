#pragma once
#include<iostream>
#include<string>
using namespace std;
class Test {
public:
	int pub;
	friend void myFunc(Test &t);
private://only to itself...
	int priv;
protected://avaiable to derived classes
	int proc;
public:

};



void myFunc(Test &t) {
	t.priv = 123;
}
class div:public Test{
public:
	void CallBase() {
		proc = 123;
	}
};
int main() {
	Test c;//obj..
	myFunc(c);
	c.pub;//public...
}