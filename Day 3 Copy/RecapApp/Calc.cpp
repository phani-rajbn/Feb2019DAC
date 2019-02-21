#include"Calc.h"
#include<fstream>
string menuFile = "B:\\Programs\\CDAC-Feb2019\\RecapSession\\RecapApp\\Menu.txt";

void displayMenu() {
	string line;
	ifstream file(menuFile);//Text File reading...
	if (file.is_open()) {
		while (getline(file, line)) {
			cout << line << endl;
		}
		file.close();
	}
}
bool processMenu(char choice) {
	if ((choice == '+') || (choice == '-') || (choice == '*') || (choice == '/')){
		double v1 = getDouble("Enter the first value");
		double v2 = getDouble("Enter the second value");
		double res = processOperation(v1, v2, choice);
		cout << "The Result: " << res << endl;
	}
	else {
		return false;
	}
}
void main() {
	char choice;
	bool processing = true;
	do {
		displayMenu();
		cin >> choice;
		processing = processMenu(choice);
	} while (processing);
}