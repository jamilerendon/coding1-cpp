#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	// welcome the player
	cout << "Hello player!\n";

	// set up the game
	// int health = 10, attack, bock, turns = 0
	int health = 10;
	int attack = 0;
	int block = 0;
	int turns = 0;

	// seed the random number generator
	srand(time(0));

	// start the loop
	while (health > 0 and turns < 4) {
		turns++;					// add 1 to turns
									// start the encounter

		int attack = rand() % 5;	// randomly generate numbers for attack (range = 0-4)
		int block = rand() % 5;		// randomly generate numbers for block (range = 0-4)

		if (block >= attack) {		// if block is greater or equal to attack, successful block otherwise, subtract attack value from health.
			cout << "Turn" << turns << ": Attack successfullyy blocked!\n";
		}
		else {
			health -= attack;
			cout << "Turn" << turns << ": You've been hurt! Health: \n";
		}

		if (health <= 0 and turns > 4) {			// keep looping while health is greater than zero and fewer than 4 turns have happened
			cout << "Lets go! \n";
		}


		char choice = 'n';			// ask the player if they would like to keep adventuring. if they don't, break out of the loop.
		cout << "Would you like to keep adventuring? (y/n): \n";
		cin >> choice;

		if (choice == 'y') {
			cout << "Time to go again! \n";
		}
		else {
			cout << "Thanks for playing!\n";
			return 0;
		}
	}

	if (health > 0) {				// if health is greater than 0, congratulate player
		cout << "Congratulations1 You've survived. \n";
	}
	else {							// otherwise, tell the player they're dead.
		cout << "Game Over. You're dead.\n";
	}
	return 0;
}

