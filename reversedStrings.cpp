#include <iostream>
#include <string>

#include <iostream>
#include <string>

int main() {
    // Declare a string variable to store the user's input
    std::string userInput;

    // Ask the user to enter a string
    std::cout << "Enter a word or phrase: ";

    // Use std::getline to get the entire line of user input
    std::getline(std::cin, userInput);

    // Reverse the string
    std::string reversedString(userInput.rbegin(), userInput.rend());

    // Display the reversed string
    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}

