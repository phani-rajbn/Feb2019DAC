#pragma once
#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;
//A Cast operator is a unary operator which forces one type of data to be converted to another type. C++ provides these new operators to optimize the code while casting and providing lesser scope of invalid casting of operators when U use them. 
//Casting operators of C++:
/*
 static_cast: Simpliest, Used for converting one type to another at the compile time itself(Base type to derived and derived to Base)
 dynamic_cast: Runtime Casting where the object of any type can be converted to other type if it supports complete object conversion
 reinterpret_cast: void* to other types and vice versa
 const_cast: casting a const data to a variable. 
*/

class Fruit {
public:
	string name;//for dynamic casting
	void testFunc() {
		//(const_cast<Fruit*>(this)) = new Fruit;
	}//Cast a variable to a const at runtime for a brief period of time, then U can cast the variable thro const_cast and set a value to it....
};

class NiceFruit:public Fruit {
public:
	string botanicalName;//for dynamic casting
};
void staticCastingExample() {
	float f = 123.234;
	int a = f;//c style casting...
	int b = static_cast<int>(f);
	cout << "The value of b: " << b << endl;
	Fruit* pFruit = new Fruit;
	NiceFruit* pNice = static_cast<NiceFruit*>(pFruit);
}
void dynamic_castExample() {
	//dynamic casting is done when the casting has to happen at runtime instead of compile time. It performs the runtime cast to check the validness of the casting. If the cast fails, it returns a NULL object. It is helpfull to perform casting for polymorphic types.(Same object instantiated to different types).
	Fruit* pFruit = new Fruit;
	//NiceFruit* pNice = dynamic_cast<NiceFruit*>(pFruit);
	//pFruit is not of the type NiceFruit, so dynamic casting wont work. IN this case, all NiceFruits are fruits, all fruits are not NiceFruits, so the casting will fail...
	NiceFruit* pNice = new NiceFruit;
	pFruit = dynamic_cast<Fruit*>(pNice);//Will work as all NiceFruits are fruits.
	//In other words, dynamic cast is used to cast derived type objects to the base types. 
	//dynamic_cast checks the typeid of the object before it performs the casting operation. typeid is a way of obtaining type information(Info about the Data Type at runtime) thro RTTI(Run-Time Type Identification/Information).
	
	
}
//Address of an Address..
void createFruit(void** ppV) {
	Fruit* pFruit = new Fruit;
	ppV = reinterpret_cast<void**>(&pFruit);
}
void reinterpret_castExample() {
	//reinterpret_cast is used to convert pointer variables of one type to any other type. It is highly unsafe and not reliable as the type casting happens thro dynamic type checking and it will throw an Exception if the typecasting fails. But is used to typecast void* to other types and the reverse of it...
	Fruit* pFruit;
	createFruit(reinterpret_cast<void**>(&pFruit));
	//void* ptr = reinterpret_cast<void*>(pFruit);
	//Fruit* is used to convert to void*.
	pFruit->name = "Apple";
	//After some time...
	//(reinterpret_cast<Fruit*>(ptr))->name = "Apple";//Used to convert a void* to Fruit*
}
void const_castExample() {
	//The const cast operator is used to explicitly override the const in a certain cast. This operator is used to set variable data to a const member which is not done usually.
	cout << "Enter v1" << endl;
	int x = 0;
	cin >> x;
	const int actual = 123;//Const member holding the variable data and modifiable
	const int* res = &actual;//set a new value to a const....
	cout << "Initial Value: " << *res << endl;
	//res = &x;//Compile Error...
	res = const_cast<int*>(&x);//modifying the const value, no compile Error...
	cout << "The modified value: " << *res << endl;
}
void main() {
	//staticCastingExample();
	//dynamic_castExample();
	//reinterpret_castExample();
	const_castExample();
}
