// Jamile Rendon-Torres
// 4-28-2025
// File Management 2 CPP

// Defined source file
#include "filemgmt2.h" // Header file
#include <fstream>  // Used for different files
#include <string>   // In order to use strings
#include <vector>   // Arrays and use of vectors
#include <iostream> // Helps in figuring out errors.

std::vector<std::string> readFileToArray(const std::string& filename) {
    std::vector<std::string> lines; // Create an empty vector to store the lines

    // Used so I am able to open the file.
    std::ifstream file(filename);

    // Used so I can check if the file was opened successfully/correctly
    if (file.is_open()) {
        std::string line;
        // Read the file line by line until the end to make sure everything works.
        while (std::getline(file, line)) {
            lines.push_back(line); // Add each line to the vector
        }
        file.close(); // Close the file when done, yippe
    }
    else {
        // Tells me if the file is unable to be opened.
        std::cerr << "Error opening file: " << filename << std::endl;
    }

    return lines; // Return the vector containing the lines from the file
}