// Jamile Rendon-Torres
// Adventure 2.0
// Coding 1

#include <iostream>
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

// Function to display the story introduction
void Story() {          
    cout << "Welcome to your second Adventure!\n";
    cout << "You are a brave adventurer, entering a dungeon.\n";
    cout << "Become stronger, and take all the treasure!\n";
}

// Function to ask a yes/no question and get the user's response
bool AskYesNo(string question) {
    char answer;
    while (true) {
        cout << question << " (y/n): ";
        cin >> answer;
        if (answer == 'y' || answer == 'Y') {
            return true;
        }
        else if (answer == 'n' || answer == 'N') {
            return false;
        }
        else {
            cout << "Invalid input. Please enter 'y' or 'n'.\n";
            cin.clear();                    // Clear error flags
            cin.ignore(10000, '\n');        // Clear input buffer
        }
    }
}

// Function to simulate rolling a die
int RollDie(int sides = 6) {
    return rand() % sides + 1;              // Generate a random number between 1 and sides
}

// Function to display the ending message
void Ending(int health) {
    if (health <= 0) {
        cout << "You have been defeated! Game over.\n";
    }
    else {
        cout << "Congratulations! You survived the dungeon!\n";
    }
}

// Function to simulate an adventure encounter
bool Adventure(int& health) { // health is passed by reference so it can be changed.
    cout << "\nYou encounter a Shadow Knight!\n";

    int monsterAttack = RollDie(8);         // Shadow Knight attack roll
    int playerBlock = RollDie(6);           // Player block roll
    int treasureRoll = RollDie(20);         // Treasure roll

    cout << "Shadow Knight attacks with " << monsterAttack << " power.\n";
    cout << "You block the attack with " << playerBlock << " power.\n";

    if (monsterAttack > playerBlock) {
        int damage = monsterAttack - playerBlock;
        health -= damage;
        cout << "You take " << damage << " damage!\n";
    }
    else {
        cout << "You successfully block the attack!\n";
    }

    if (treasureRoll >= 15) {
        cout << "You find a treasure chest! You gain 10 health!\n";
        health += 10;
    }
    else {
        cout << "No treasure this time.\n";
    }

    cout << "Your current health: " << health << "\n";

    if (health <= 0) {
        return false;                       // Player died, game over
    }

    return AskYesNo("Do you want to continue adventuring?"); // Ask if they want to continue
}

int main() {
    srand(time(0));                         // Seed the random number generator

    Story();

    int playerHealth = 30;                  // Starting health

    bool continueGame = true;
    while (continueGame && playerHealth > 0) {
        continueGame = Adventure(playerHealth);
    }

    Ending(playerHealth);

    return 0;
}



