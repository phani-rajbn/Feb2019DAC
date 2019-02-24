#pragma once
#include"CommonFunctions.h"
class Cst {
public:
	virtual void PayBill(double amount) {
		print("An Amount of Rs." + to_string(amount) + " has been accepted");
	}
};

class PreviCst : public Cst {
public:
	virtual void PayBill(double amount) {
		double newAmount = amount - (amount * 10 / 100);
		print("An Amount of Rs." + to_string(newAmount) + " has been accepted");
	}
};
