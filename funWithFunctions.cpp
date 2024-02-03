#include <iostream>

// Function to get an integer from the user
int getAnIntFromTheUser() {
    int userInput;
    std::cout << "Enter a number: ";
    std::cin >> userInput;
    return userInput;
}

// Function to compare two integers and return the larger one
int compareTwoInts(int a, int b) {
    return (a > b) ? a : b;
}

// Function to sum two integers and return the result
int sumTwoInts(int a, int b) {
    return a + b;
}

int main() {
    // Get two integers from the user
    int firstInt = getAnIntFromTheUser();
    int secondInt = getAnIntFromTheUser();

    // Compare and display the larger integer
    int largerInt = compareTwoInts(firstInt, secondInt);
    std::cout << "The larger integer is: " << largerInt << std::endl;

    // Sum the two integers and display the result
    int sumResult = sumTwoInts(firstInt, secondInt);
    std::cout << "The sum of the two integers is: " << sumResult << std::endl;

    return 0;
}

