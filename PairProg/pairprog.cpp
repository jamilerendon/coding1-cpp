// Example program
#include <iostream>
#include <string>    // so we can use strings

// this is the start of our program.
// our program starts here.

int main()
{
    std::cout << "\nHello World!\n";
 
    //variables (integer, float, string, char, boolean)
    // the variable type is integer (whole numbers)
    // the variable name is "distance"
    // the variable value is 45
    int distance = 45;    //in miles
    
    //type is string, name is "destination", value is "portland, OR"
    std::string destination = " Portland, OR";     // city, state
    
    
    //add a comment explaining this line, just like i did with the others.
    bool areWeThereYet = false;
    
    // we are going to use the variables to talk to the user.
    // write a sentence
    // "we are going to <destination>, it is <distance> away.
    // add the second half the line.
    std::cout << "We are going to" << destination << ".\n";
    
}