#include "AbstractClasses.h"
void main() {
	/************Constructors and Destructors**********************
	//Person p;//This will call the constructor..
	//Person* ptr = new Person;//Creating an object at runtime using new operator which returns a pointer object(Address of the object which has been created)....

	//When U create an object using new operator(Pointer variables), the objects are created in a larger area of memory within the process called as HEAP. Anything that is created in the heap are not destroyed by the runtime, but must be explicitly deleted by the caller who has created it.
	//Person* ptr = new Person("Phani","Raj", 1977);
	//ptr->Print();
	//delete ptr;//Opposite of new is delete...

	Person p("Phani", "Raj", 1977);
	p.Print();//When the object goes out of scope within a function block, it will be implicitly removed from the memory..
	Person p2("Sunder", "Raj", 1977);
	p2.Print();
	Person p3("Kumar", "Raj", 1977);
	p3.Print();
	Person p4("Gopal", "Raj", 1977);
	p4.Print();
	******************Inheritance Demo***************************
	Son ex;
	//ex.MakePayment("BanuPrakash", 5000);//Father's functions...
	//ex.MakePayment("BanuPrakash", 15000);
	//ex.MakePayment("BanuPrakash", 25000);
	//ex.MakePayment("BanuPrakash", 35000);
	//ex.MakePayment("BanuPrakash", 45000);

	ex.MakeMyCustomPayments("Phani", 5600);
	ex.MakeMyCustomPayments("Phani", 5600);

	ex.MakeMyCustomPayments("Phani", 5600);

	ex.MakeMyCustomPayments("Phani", 5600);


	ex.Purchase("TV", 5000);//His own functions...
	*****************Composition***********************
	Infotainment* info = new Infotainment;
	info->deviceName = "JBL";
	Car r(info);//Every car 'HAS A' Infotainment....
	r.Start();
	*************Method overriding*******************************
	TestClass* pClass = new DerivedTestClass();
	pClass->TestFunc();//Will call the derived class func if its overriden else calls the base class version..
	//Base type calling the derived specific function thro Typecast..
	((DerivedTestClass*)pClass)->SecondTestFunc();

//	pClass = new DerivedTestClass();
	//((DerivedTestClass*)pClass)->SecondTestFunc();
	/*DerivedTestClass* pDiv = new DerivedTestClass();
	pDiv->SecondTestFunc();*///I dont want to create a new object as the old data that I had set is lost.....
	/***************Abstract classes Demo******************
	Account* pAcc = new SBAccount();
	pAcc->accName = "Phaniraj";
	pAcc->accNo = 123422;
	pAcc->Credit(25000);
	pAcc->CalculateInterest();
	cout << "The Current balance is " << pAcc->GetBalance() << endl;
	*********************Testing code************************/
	cout << "Enter the name";
	string name;
	cin >> name;
	cout << "The name is " << name;
}