#include<iostream>//InputOutput stream for performing IO ops...
using namespace std;//Grouping done by the C++ libraries to avoid naming conflicts. 
//#include is basically used to include external files into the current file. Its like inserting the contents of the include at that location, This is used to declare the predefined variables, objects and functions into the current file. 


//Syntax of creating a function. Of that one function with a name called main is the entry point function. This is the place where the program starts and ends. If this function exits, the program too exits(Terminates)
//Why Console App? This App is executed on the Command prompt and does not need any external Output or UI device. Its simple and easy to work, so beginners can concentrate on programming constructs rather than other parts of the App development.
void main() {
	cout << "Hello World from Cpp";//cout is a static operation of the std to display output on the Console Window....cout is an object that represents the Console output Window upon which we perform the operations.  
	//cin;//The opposite of output which is used to take any inputs from the user.. 
	//PS: VS has a feature Execute without Debugging(Ctrl+F5) which makes the App execute and wait for the user to press any key to terminate the program...

}//Ctrl+Shift+B to compile and build the Application
//Ctrl+F5 to execute the App...

//The Main Function:  The Entry point of UR program is something that starts UR Application and when it exits, the Application will terminate.  main is case sensitive and can have either void or int. void means nothing. The function will not return(result) any thing. main is a global function and it will not be allowed to be called by other functions in C++.  main will call other functions. 