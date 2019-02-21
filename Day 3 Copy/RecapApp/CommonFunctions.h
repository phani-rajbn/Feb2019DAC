#pragma once
/*If u want to exit a block, U need jump statements
return is a jump statement that exits the function.
break is used to exit the sub-blocks within the function
throw is another form of jump statement that exits a function as an Error.
continue statement is used to execute the next iteration or block of statement
goto is another jump statement that moves to a defined location from where the execution continues. It stops the current execution path and moves to the label path...
*/
//Gives 2 inputs, we give one output...
double AddFunc(double x, double y) {
	if (x < 0)
		throw "Not possible";//Programmer sets this because it does not satisfy the needs...
	return x + y;//jump statement.
}

int TestFunc(int val) {
	cout << "Before modifying: " << val << endl;
	val = 453453;
	cout << "After modifying: " << val << endl;
	return val;
}
//Passing args by reference: While passing by value has couple of limitations, U could pass the parameters as reference. If U want to return multiple values from a function call, U can go for pass by reference where the modified value will be retained even after the function returns to the caller. 
//No local copy is created while U pass the variable into the function. the variables have to be declared and assigned to an intial state before passing it into the function. The way U pass to the function remains like any other variable passing. When U use passbyValue, U could pass the literals, but if U want to pass by reference its always the variables. 

void mathOperation(int first, int second, int &add, int &sub) {
//When a value is passed as arg, its not the original variable that comes into the function, a clone of it comes into the function. Because of this reason, any modifications U make to this clone is not reflected to the original variable that has been created to pass into this function...
	add = first + second;
	sub = first - second;
}//Note the function is a void Fn...
//Use & to declare a parameter as reference. 