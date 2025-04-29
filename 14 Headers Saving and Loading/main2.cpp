// Jamile Rendon-Torres
// 4-28-2025
// Main CPP

#include <iostream>
#include <string>
#include <array> // For creating a fixed-size array
#include "item2.h"    // Include the Item class definition
#include "filemgmt2.h" // Include the readFileToArray function declaration

int main() {
    // 1. Read a file into an array (using std::vector for flexibility)
    std::vector < std::string > fileLines = readFileToArray("data.txt");

    std::cout << "--- Lines read from data.txt ---" << std::endl;
    for (const std::string& line : fileLines) {
        std::cout << line << std::endl;
    }
    std::cout << "-------------------------------\n" << std::endl;

    // 3. Create an array of 5 items and display them with a loop
    std::array < Item, 5 > itemArray;

    // Create Item objects and store them in the array
    itemArray[0] = Item("Health Potion", "Restores some of your health.", 15, true);
    itemArray[1] = Item("Great Sword", "An extremely reliable weapon.", 50, false);
    itemArray[2] = Item("Leather Armor", "Provides some slight protection.", 40, false);
    itemArray[3] = Item("Gold Key", "Opens Chest", 25, true);
    itemArray[4] = Item("Old Book", "Shows an array of spells lost to time.", 30, true);

    std::cout << "--- Displaying items in the array ---" << std::endl;
    // Loop through the array of items
    for (size_t i = 0; i < itemArray.size(); ++i) {
        std::cout << "Item " << i + 1 << ":" << std::endl;
        itemArray[i].examine(); // Call the examine() method for each item
    }
    std::cout << "------------------------------------\n" << std::endl;

    return 0;
}