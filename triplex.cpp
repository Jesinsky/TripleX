#include <iostream>

int main()
{
    // Print welcome message to the terminal.
    std::cout << "You are a secrete agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";

    // Declare 3 number code.
    const int a = 4;
    const int b = 5;
    const int c = 7;

    const int sum = a + b + c;
    const int product = a * b * c;

    // Print sum and product to the terminal.
    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}