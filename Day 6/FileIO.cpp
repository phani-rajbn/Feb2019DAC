#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//File IO operations in C++: Basic input ouput operations happen on the console output window available under iostream. For File IO operations we use a seperate Header file called fstream.  in this we have 2 sub versions: ofstream(Represents the output file stream and used to create and write to files) and ifstream(Represents the input file Stream and is used to read info from the files).
void writingToFile() {
	char content[100];
	ofstream outFile;
	outFile.open("MyFile.csv", ios::ate);
	cout << "Enter the content to write:" << endl;
	cin.getline(content, 100);
	outFile << content << endl;
	outFile.close();
}
void readFromFile() {
	char content[100];
	ifstream inFile;
	inFile.open("MyFile.csv");
	inFile >> content;
	cout << content << endl;
	inFile.close();
}
void main() {
	//ofstream oFile;
	//string filename = "..//SampleConApp//FileIO.cpp";
	//oFile.open(filename, ios::out | ios::trunc);//trucate the existing file...

	//fstream fs;
	//fs.open("MyFile.txt", ios::out | ios::in);//Open an existing file, if not create a new file and open it along with writing ability to it...
	
	writingToFile();
	readFromFile();
}
/*Important options for File Open/writing
in: File opened for input
out: File opened for output
trunc: erase existing data in the file
binary: To Open the binary file(Non Text files)
ate: output position is set to the end of the file.
app: all the outputs are appended to the existing contents of the file
Default is in|out if the object is of the type fstream. While using ofstream, default os out and ifstream: default is in....
After doing the operations with the file, it must be closed. 
is_open is a function used to check whether the file is opened or not.
*/






