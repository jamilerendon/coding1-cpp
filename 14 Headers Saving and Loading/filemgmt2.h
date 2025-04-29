#pragma once
// Jamile Rendon-Torres
// 4-28-2025
// File Management 2 Header

// This header file will tell the other files what functions are available for it to use.
#ifndef FILEMGMT_H
#define FILEMGMT_H

#include <iostream>
#include <string>
#include <vector> // array

// Used to tell the compiler that this function exists in filemgmt.cpp
std::vector<std::string> readFileToArray(const std::string& filename);

#endif // FILEMGMT_H
