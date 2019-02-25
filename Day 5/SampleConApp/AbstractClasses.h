#pragma once
#include<string>
#include<iostream>
using namespace std;
class Account {
private:
	double accBalance;
public:
	string accName;
	int accNo;
	void Credit(double amount) {
		accBalance += amount;
	}
	void Debit(double amount) {
		if (amount > accBalance)
			throw "Insufficient funds";
		accBalance -= amount;
	}
	double GetBalance() {
		return accBalance;
	}
	virtual void CalculateInterest() = 0;//pure virtual function is one whose method is assigned to 0 with virtual keyword and will not contain implementation.
	
};

class SBAccount :public Account {
public:
	virtual void CalculateInterest() {
		auto bal = GetBalance();//Within the class, U can call the base version without any object or name...
		auto interest = (bal * 7.5 / 100 * 1 / 2);
		Credit(interest);
	}
};
