#include "CommonFunctions.h"
//Classes have certain methods and members that are private to the class that is declared. We call them as private members. This is one of the features of OOP.
//There are possibilities where all functions of a certain class be allowed to access the private members of another class, then U could mark the whole class as a friend class in the class that U wish to give the privilage.

class TestClass {
private:
	void testFunc() {
		print("private test Func is called"); 
	}//This function is inaccessible outside this class.
	void testFunc2() {
		print("This is test Func 2");
	}
public:
	friend class ExamClass;//All the functions of this class are allowed to access the private members of the Test class..
	friend void CallPrivateFunc(TestClass cls);
	//void CallTestFunc() {
	//	testFunc();
	//}
};
class ExamClass {
public:
	void CallAllTests(TestClass& cls) {
		cls.testFunc();//private function of the TestClass here...
	}
	//All the functions of this class can call the private members of the TestClass....
	void CallOnlySecondTest(TestClass& cls) {
		cls.testFunc2();
	}
};
void CallPrivateFunc(TestClass cls) {
	cls.testFunc();//private function from outside the class
}
void main() {
	TestClass cls;//U need an object thro which the private functions are called...
	ExamClass ex;
	ex.CallAllTests(cls);//friend class calling...
	ex.CallOnlySecondTest(cls);
//	cls.CallTestFunc();//WHich internally calls the private function...
	CallPrivateFunc(cls);//friend function calling
}