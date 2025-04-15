// Jamile Rendon-Torres
// Twelve Classes

#include <iostream>
#include <string>

class Human {
public:
	std::string Name;
	int Health;
	int Damage;

	// Constructor with a parameter that has a name, some health, and a base damage
	Human(std::string name, int health, int baseDamage) : Name(name), Health(health), Damage(baseDamage) {}

	// Default constructor (if no arguments are provided)
	Human() : Name("Unnamed"), Health(10), Damage(4) {}

	// Method to make the human say hello
	void SayHello() {
		std::cout << "Hello my name is " << Name << "!" << std::endl;
	}

	// Method to set the health by a given amount (can be positive or negative)
	void SetHealth(int byAmount) {
		Health += byAmount;
		std::cout << Name << "'s health changed now " << byAmount << ". Current health: " << Health << std::endl;
	}

	// Method to set the damage to a specific value
	void SetDamage(int givenDamage) {
		Damage = givenDamage;
		std::cout << Name << "'s damage is now " << Damage << "." << std::endl;
	}

	// Method to get the current health
	int GetHealth() const {
		return Health;
	}

	// Method to get the current damage
	int GetDamage() const {
		return Damage;
	}
};

int main() {
	// Create Human objects using the constructor
	Human player1("Sung Jinwoo", 25, 6);
	Human enemy1("Igris", 12, 3);
	Human defaultHuman; // Uses the default constructor

	//Interact with the Human objects
	player1.SayHello();
	enemy1.SayHello();
	defaultHuman.SayHello();

	std::cout << player1.Name << "'s health: " << player1.GetHealth() << ", damage: " << player1.GetDamage() << std::endl;
	std::cout << enemy1.Name << "'s health: " << enemy1.GetHealth() << ", damage: " << enemy1.GetDamage() << std::endl;
	std::cout << defaultHuman.Name << "'s health: " << defaultHuman.GetHealth() << ", damage: " << defaultHuman.GetDamage() << std::endl;

	player1.SetHealth(-5); // Player takes damage
	enemy1.SetHealth(-2); // Enemy takes damage
	player1.SetDamage(8);  // Player's damage increases

	std::cout << player1.Name << "'s new health: " << player1.GetHealth() << ", damage: " << player1.GetDamage() << std::endl;
	std::cout << enemy1.Name << "'s new health: " << enemy1.GetHealth() << ", damage: " << enemy1.GetDamage() << std::endl;

	return 0;
}