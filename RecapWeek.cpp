// Jamile Rendon-Torres
// Week 8 Recap

#include <iostream>
#include <string>
/* using namespace std;

// FIRST TEST
int main() {
	cout << "Hello world!\n";

	// ask the player if they prefer cheese or pepperoni pizza.
	cout << "What kind of pizza would you prefer, Cheese or Pepperoni?\n";
	string input = "";
	getline(cin, input);

	// use an if, else if, and else to check their input
	if (input == "Cheese") {
		cout << "That's one of my favorite toppings too!\n";
	}
	else if (input == "Pepperoni") {
		cout << "Pepperoni is also really good!\n";
	}

	// have the computer agree or disagree with their choice, or berate them for some third option.
	else {
		cout << "SIUDHNHICJSND!!! How could you like " << input << "!?!?!?!? EWWWW, SO GROSS!!!\n\n";
	}

	return 0;

} */

	// Another example of the same thing but more dangerous
	// if (input == "Cheese")				cout << "That's one of my favorite toppings too!\n";
	// else if(input == "Pepperoni")		cout << "Pepperoni is also really good!\n";
	// else if(input == "Sausage")			cout << "Uhhh... okay.. I guess..\n";
	// else									cout << "SIUDHNHICJSND!!! How could you like " << input << "!?!?!?!? EWWWW, SO GROSS!!!\n\n";

	// SECOND TEST

/*						// add these two at the beginning as well if you don't have it already.
#include <iostream>
#include <string>
*/
#include <cstdlib>		// c standard library
#include <ctime>		// c time library
using namespace std;

int main() {
	// seed random number generator
	cout << "\nGive me a number!\n";
	string input = "";		// Allows player to put in a number to guess.
	srand(time(0));

	bool debug = true;		// turn this to false when shipping the game.

	// build a guess the number game
	// have the computer choose a random number between 1 and 10. (inclusive)
	int theNumber = rand() % 10 + 1;

	// start a while loop
	while (true) {
		if (debug) cout << "The number is " << theNumber << ".\n";

		// ask the player to guess the number
		cout << "What is your guess?\n";
		getline(cin, input);
		/* int playerGuess = 0;

		try {
			playerGuess = stoi(input);
		}
		catch (invalid_argument) {
			cout << "That's not the number, please try again.\n";
			continue;
		}
		*/

		if (input == "quit") {
			cout << "oh, leaving already? See you again, I hope.\n";
			break;
		}

		// if the number is corrent, tell the player, and end the loop.
		if (stoi(input) == theNumber) {
			cout << "Yep! That's the number! You guessed it!\n";
			break;
		}

		// if the number is too high, have the computer say "lower!"
		if (stoi(input) > theNumber) {
			cout << "Lower!\n";

		}
		// if the number is too low, have the computer say higher!"
		else {
			cout << "Higher!\n";
		}

	}
		// // don't forget
			// #include <cstdlib>
			// #include <ctime>
			// int main(), srand(time(0));
			// (hard mode) have the player pick a number, and let the computer guess.
}