#include<iostream>
#include<string>
using namespace std;

int* getArray() {
	int* arr = new int[5];
	return arr;
}
int main() {
	auto x = getArray();
	for (int i = 0; i < 5; i++)
	{
		x[i] = i;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << x[i] << endl;
	}
}