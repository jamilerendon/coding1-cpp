// Jamile Rendon-Torres
// 4-28-2025
// Item 2 CPP

// Source file
#include "item2.h" // Header file

Item::Item() : name("Deafault Item"), description("A default item."), value(0), isUsable(false) {}

Item::Item(std::string itemName, std::string itemDescription, int itemValue, bool itemUsable)
    : name(itemName), description(itemDescription), value(itemValue), isUsable(itemUsable) {}

void Item::examine() const {
    std::cout << "--- Item Details ---" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Description: " << description << std::endl;
    std::cout << "Value: " << value << std::endl;
    std::cout << "Usable: " << (isUsable ? "Yes" : "No") << std::endl;
    std::cout << "--------------------" << std::endl;
}

std::string Item::getName() const {
    return name;
}

std::string Item::getDescription() const {
    return description;
}

int Item::getValue() const {
    return value;
}

bool Item::getIsUsable() const {
    return isUsable;
}

void Item::setName(const std::string& newName) {
    name = newName;
}

void Item::setDescription(const std::string& newDescription) {
    description = newDescription;
}

void Item::setValue(int newValue) {
    value = newValue;
}

void Item::setIsUsable(bool usable) {
    isUsable = usable;
}