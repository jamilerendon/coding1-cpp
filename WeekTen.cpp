//Jamile Rendon-Torres
// All about functions
// Coding 1 Week 10
// C++ Functions
// declaring
// defining
// passing by value
// returning by value
// overloading functions

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

// whenever possible - don't use global variables. it's safer. it avoids bugs.
// global variables go at the top, so that all the functions can use them.
int currentShirtSizeElement = 0;					// this keeps the 
string professor = "Brian";


// declaring and defining a new function
// the function must be declared before it is used
// the function CAN be defined later in the code.
// this function returns nothing.
// this function's name is "sayHello()"
void sayHello() {
	cout << "Hello!\n";
}

void sayGoodbye() {
	cout << "Goodbye..\n";
}

// adding two numbers with (parameters)
// parameters go inside the paranthesis
// they are the INPUTS for our function
// optionally, we can add default values for our input parameters.
// we are creating two variables in the input parameter (paranthesis)
void add(int number1 = 2 , int number2 = 0) {
	// cout << "The sum of number1 and number2 is ";
	cout << "The sume of " << number1 << " and " << number2 << " is ";
	cout << number1 + number2 << endl;
}

// overload the function 
void add(float firstNum, float secondNum) {
	cout << firstNum << " plus " << secondNum << " equals ";
	cout << firstNum + secondNum << endl;
}

// break your brain before the break,
// overload add() to accept two strings.
// using concatenation!
// call with add("coffee", "coffee");
void add(string firstWord, string secondWord) {
	cout << firstWord << " plus " << secondWord << " equals ";
	cout << firstWord + secondWord << endl;
}

// return types - the OUTPUT of the function
bool askYN(string question = "y/n?") {
	// in a do-while loop,
	do {
		cout << question << " (y/n)" << endl;		//ask the user the question
		string input;
		getline(cin, input);						// get input from player

		if (input == "y") {							// if y, return true
			return true;							// this quits the function
		}
		else if (input == "n") {					// if n, return false
			return false;
		}
		else {										// else, loop again.
			cout << "Please type 'y' or 'n'.\n";
		}
	} while (true);
}

// show array elements function
// doesn't return anything.
// accepts one parameter as a pointer (shhhhhh you don't know about those yet)
// call with show(names, 3);
void show(string* array, int arraySize) {			// pointer string is  string*
	cout << "Here are the contents of your array: \n";
	for (int i = 0; i < arraySize; i++) {
		cout << array[i] << endl;
	}
}

// create a function that accepts a pointer to an array of strings
// let it add another element, as long as there are spaces.
void addShirtSize(string* array) {
	string input;
	while(true) {									//  1. add a while loop to addShirtSize() that let's the user add sizes
		if (currentShirtSizeElement > 10) {
			cout << "That is all the shirt sizes we can support.\n";
			break;
		}

		cout << "Please add a shirt size to the array.\n";
		cout << "or type 'done' to stop.\n";
		getline(cin, input);

		if (input == "done") {						// until they say DONE or they fill up the array
			break;									// break out of the loop
		}

		// increment the global counter
		array[currentShirtSizeElement++] = input;
	}
} 

// in-class assignment
// 1. add a while loop to addShirtSize() that let's the user add sizes
		// until they say DONE or they fill up the array

int main() {

	// SETUP
	string shirtSizes[10];							// creating the array of shirtSizes
	// int currentSize = 0;
	addShirtSize(shirtSizes);						// add 3 shirt sizes
	/* 
	addShirtSize(shirtSizes);
	addShirtSize(shirtSizes); 
	*/
	show(shirtSizes, currentShirtSizeElement);		// show shirt sizes

	string playerName = "brian";					// local variable

	// calling the sayHello() function
	sayHello();

	// calling the two numbers with parameters
	add(0);
	add(23);										// when you call the function, you send the two input parameters.
	add(23, 2);

	// calling the overload function w/ floats
	add(22.2f, 23.5f);								// floats need 'f' after the numbers.

	// calling the overload function w/ strings
	add("coffee", "coffee");

	// calling the return type function
	if (askYN("Do you like pizza?")) {
		cout << "Let's get some pizza for lunch!\n";
	}
	else {
		cout << "I would not care to know you.\n";
	}

	cout << "Give me three names!\n";

	// warm-up task - create an array with three names
	string names[3];								// creates an array

	names[0] = "Percy";								//three names
	names[1] = "Annabeth";
	names[2] = "Grover";

	// calling the show array elements function
	show(names, 3);

	// use a loop to display all of the names
	int counter = 0;
	while (counter < 3) {
		cout << names[counter++] << endl;
	}

	for (int i = 0; i < 3; i++) {
		cout << names[i] << endl;
	}
	// calling the sayGoodbye() function
	sayGoodbye();

	// compile and run this program to finish

}