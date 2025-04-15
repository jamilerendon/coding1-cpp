// Jamile Rendon-Torres
// Classes

#include <iostream>
#include <string>
using namespace std;

// use the class keyword to create a class named "robot"
// don't forget the semi-colon after the curly braces.
class robot {
private:					// only I can see this, call this, change this.

	// Data Members
	string name;
	string phrase;			// phrase include punctuation
	int charge = 10; 
	int maxCharge = 100; 
	int minCharge = 0;			// percentage

public:
	// Member Functions
	// function declarations, to be refined later.
	// function declarations don't require parameter names
	robot(string, string, int);
	robot();

public:						// anyone can see this, call this, change this.
	void SayHello();

	// Setters and Getters give access to private variables
	// through whatever tests we want to write.

	// SetCharge clamps charge to a range 0-100 (inclusive)
	// Setters will always have an input parameter
	void SetCharge(int givenCharge) {
		if(givenCharge < 0) {
			charge = 0;
		}
		else if (givenCharge > 100) {
			charge = 100;
		}
		else {
			charge = givenCharge;
		}
	}
	void ChangeCharge(int by = -1) {
		charge += by;
		SetCharge(charge);		// for clamping charge.
	}
	// Getters will always have a return type
	int GetCharge() {
		return charge;
	}
	void SetName(string givenName) {
		if (givenName.size() < 2) {
			cout << "Name is too short!\n";
			return;				// return nothing out of a void function to end the function
		}
		else if(givenName.size() > 20) {
			cout << "Name is too long!\n";
			return;
		}
		else {
			name = givenName;
		}
	}
	string GetName() {
		return name;
	}
	// no need to let people set the phrase
	// or hear it! The robot gets to be in charge of when they say that.

protected:
};

// Function Definitions must be outside of the class definition.
// constructor, has to be named the same as the class, and doesn't have a return type
robot::robot(string givenName, string givenPhrase, int givenCharge) {
	// assigns this instance's variables to the given values.
	name = givenName;
	phrase = givenPhrase;
	charge = givenCharge;

	// let's us know that this constructor has run.
	cout << "A new robot has been constructed!\n";
}

	// overloading the constructor with a "default constructor"
robot::robot() {
	cout << "Using the DEFAULT constructor.\n";
	cout << "Hey programmer Dean, please fix this in the source code.\n";
}

void robot::SayHello() {
		cout << "My name is " << name << " and my charge is " << charge << ".\n";
		cout << phrase << "\n";
		ChangeCharge();		// this task was not very expensive on our charge.
	}

int main() {
	cout << "Classes, yeah?\n";

	robot bobert;			// constructor runs here.
	bobert.SetName("Bobert Junior");
	bobert.SetCharge(5);

	cout << "Have a look at my new robot! Their name is " << bobert.GetName() << ".\n";
	cout << "I am currently charging them, their charge is " << bobert.GetCharge() << ".\n";

	bobert.ChangeCharge(50);
	cout << "two hours later, bobert's charge is now " << bobert.GetCharge() << ".\n";

	robot rob("Roberto", "I can fix anything!", 25);
	cout << "My new robot was very expensive! He works on the nuclear reactor.\n";
	cout << "They can introduce introduce themselves, watch!\n";
	rob.ChangeCharge(-200);			// nuclear reactor sapped all energy
	rob.SayHello();

	bobert.SayHello();

	return 0;
}