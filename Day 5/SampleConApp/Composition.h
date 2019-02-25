#pragma once
#include<iostream>
#include<string>
using namespace std;

void print(string msg) {
	cout << msg << endl;
}
class Infotainment {
public:
	string deviceName;
	double cost;
	void Start() {
		print("Infotainment by name " + deviceName + " is playing");
	}
};
//Every car is not an infotainment, but needs the infotainment
class Car {
private:
	Infotainment* stereo;//not instantiated...
public:
	Car()//Constructor will internall construct other objects this class is using...
	{
		stereo = new Infotainment();//actual object is created...
		stereo->deviceName = "Philips";
	}
	//Constructor overloading...
	Car(Infotainment* info) {
		this->stereo = info;
		print("This car is fitted with customized infotainment");
	}
	void Start() {
		print("Car has started");
		stereo->Start();
	}
};//Real time car