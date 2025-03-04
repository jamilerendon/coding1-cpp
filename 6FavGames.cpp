#include <iostream>
#include <string>

using namespace std;

int main() {

	const int size = 100;										//Define a maximum size for the array of strings
	int gameCount = 0;
	string games[size];
	int choice;
	string gameName;
	string gameToEdit;
	string newGameName;
	string gameToRemove;
	bool found;

	cout << "\nHello player!\n";

	do {
		cout << "\nGame List" << endl;
		cout << "1. Add Game" << endl;
		cout << "2. Edit Game" << endl;
		cout << "3. Remove Game" << endl;
		cout << "4. Show List" << endl;
		cout << "5. Quit" << endl;
		cout << "Pick your choice: ";
		cin >> choice;
		cin.ignore();											// bye bye

		switch (choice) {
		case 1:													// Add
			cout << "Enter the name of the game to add: ";
			getline(cin, gameName);
			if (gameCount < size) {
				games[gameCount] = gameName;
				gameCount++;
				cout << "Game added: " << gameName << endl;
			}
			else {
				cout << "Game list is full." << endl;
			}
			break;

		case 2:													// Edit
			if (gameCount > 0) {
				cout << "Enter the name of the game to edit: ";
				getline(cin, gameToEdit);
				found = false;
				for (int i = 0; i < gameCount; i++) {
					if (games[i] == gameToEdit) {
						found = true;
						cout << "Enter the new name for the game: ";
						getline(cin, newGameName);
						games[i] = newGameName;
						cout << "Game edited successfully." << endl;
						break;
					}
				}
				if (!found) {
					cout << "Game is not found." << endl;
				}
			}
			else {
				cout << "Game list is empty." << endl;
			}
			break;
		
		case 3:													// Remove
			if (gameCount > 0) {
				cout << "Enter the name of the game to remove: ";
				getline(cin, gameToRemove);
				found = false;
				for (int i = 0; i < gameCount; i++) {
					if (games[i] == gameToRemove) {
						found = true;
						for (int j = i; j < gameCount - 1; j++) {
							games[j] = games[j + 1];
						}
						gameCount--;
						cout << "Game removed successfully." << endl;
						break;
					}
				}
				if (!found) {
					cout << "Game is not found." << endl;
				}
			}
			else {
				cout << "Game List is empty." << endl;
			}
			break;

		case 4:													// Show
			if (gameCount > 0) {
				cout << "Game List:" << endl;
				for (int i = 0; i < gameCount; i++) {
					cout << i + 1 << ". " << games[i] << endl;
				}
			}
			else {
				cout << "Game list is empty." << endl;
			} 
			break;

		case 5:													// Quit
			cout << "Thank you!" << endl;
			break;

		default:
			cout << "Invalid choice." << endl;

		} 

	} while (choice != 5);

	return 0;
}