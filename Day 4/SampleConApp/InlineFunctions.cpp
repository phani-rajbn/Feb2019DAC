#include"Employee.h"
//An inline function is a function whose body is inserted in the place of its call. It is similar to that of macros. Inline functions are used for small functions to improve the performance of the program execution. However this will increase the size of the program. That is why only small functions are recommended to be declared as inline. Other functions will have a reference which will be invoked by the program which moves to that location and executes. 
//inline is a request(not a command) made to the runtime to expand the function within its call. If the functions is big and could not be accomodated within the call stack, the runtime automatically makes it a calling function and invokes it from its location rather than the calling location.
//There are 2 ways to make a function inline. If U implement the function of a class within the declaration, its automatic inlining. Alternatively U could use a keyword called inline to mark the function as inline func 
/*Advantages:
When a function call is made by the runtime, a lot of registry entries would be created which will be removed when U mark it as inline. 
When small functions are called frequently, the compiler generates more code for the function calls, there by increasing the size of the EXE along with other maintainance problems. 
Disadvantages: Lot of inline functions make the size of the binary EXE to increase. inline keyword must be used at every declaration level within UR Application(Tedious task). VS helps in creating inline functions by providing automatic inlining where it creates only an header file with no implementation file and all the definitions will be provided inside the header itself.
*/
void main() {
	Employee emp;
	emp.setDetails(123, "Phaniraj", "Bangalore");
	emp.getDetails();
}