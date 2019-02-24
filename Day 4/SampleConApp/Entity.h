#pragma once
#include"CommonFunctions.h"
class Customer {
private:
	int cstId;
	string cstName;
	string cstAddress;
public:
	void setCustomerID(int id) {
		cstId = id;
	}

	void setCustomerName(string name) {
		cstName = name;
	}
	void setCustomerAddress(string address) {
		cstAddress = address;
	}

	int getCustomerId() {
		return cstId;
	}

	string getCustomerAddress(){
		return cstAddress;
	}
	string getCustomerName(){
		return cstName;
	}
};
//This is called as Repository Pattern..
class CustomerDatabase {
private:
	Customer* pDatabase = new Customer[10];//dynamic Allocation of memory

public:
	void AddNewCustomer(Customer cst) {
		//iterate thro all the customers..
		for (int i = 0; i < 10; i++)
		{
			if (pDatabase->getCustomerId() != 0) {
				pDatabase = &cst;
				return;
			}
		}
		throw "Customer cannot be added to the database";

	}
	void UpdateCustomer(Customer cst) {

	}

	void DeleteCustomer(int id) {

	}

	Customer* GetAllCustomers(string cstName){
		return pDatabase;
	}
};

