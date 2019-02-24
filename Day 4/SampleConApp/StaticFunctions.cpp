//Functions that are having a single reference of it across the application are called as static members or static data. static makes sense when U work of classes and objects.
//The static variables are placed in a different location over the other variables or members created by the Class. static is used when U want to reference it without an object instance. instance members need an object to access them, but static is accessed by the classname::
//To set the values to the variables, U could use a sp. function called Constructor to set the values as per UR requirement.. 
#include"CommonFunctions.h"
class TestClass {
public:
	static int no;//static member
	int testId;//instance member
	static void TestFunc() {
		print("Testing the func");
	}

	void InstanceTestFunc() {
		print("Testing Instance func");
	}
};
//static is singleton and is not associated with the instance of the class, it should be initialized outside the class...
int TestClass::no = 0;//initialize the static members of a class..

int main() {
	TestClass::TestFunc();//No need for an object....
	
	TestClass cls;//1st instance...
	cls.InstanceTestFunc();
	cls.testId = 123;
	cls.no = 345;//set a new value to the static member
	//	

	TestClass cls2;//2nd instance...
	cls2.testId = 234;
	cls2.no = 777;//set a new value to the static member
	print("The testID: " + to_string(cls.testId) + "\nThe Test No: " + to_string(cls.no));
	print("The testID: " + to_string(cls2.testId) + "\nThe Test No: " +
		to_string(cls2.no));
	return 0;
}