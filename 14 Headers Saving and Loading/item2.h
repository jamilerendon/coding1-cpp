#pragma once
// Jamile Rendon-Torres
// 4-28-2025
// Item 2 Header


// Header file
#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

// Define a class named Item
class Item {
private:
    // Private (None can access without permission)
    std::string name;
    std::string description;
    int value;
    bool isUsable;

public:
    Item();

    // Constructor: This function allows me to create Item objects
    Item(std::string itemName, std::string itemDescription, int itemValue, bool itemUsable);

    // Shows all item details.
    void examine() const; // 'Const' allows the item to not be changed.

    // Getter methods: This function allows me to get the values of the private variables
    std::string getName() const;
    std::string getDescription() const;
    int getValue() const;
    bool getIsUsable() const;

    // Setter methods: This function allows me to change the values of the private variables
    void setName(const std::string& newName);
    void setDescription(const std::string& newDescription);
    void setValue(int newValue);
    void setIsUsable(bool usable);
};

#endif // ITEM_H item header.
