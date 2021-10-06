#include <iostream>

void PrintIntroduction()
{
    // Print welcome message to the terminal.
    std::cout << "\n\nYou are a secrete agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame()
{
    PrintIntroduction();

    // Declare 3 number code.
    const int CodeA = 4;
    const int CodeB = 5;
    const int CodeC = 7;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal.
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code\n"; 
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl << std::endl;

    // Store players guess.
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "You are entered: " << GuessA << GuessB << GuessC << std::endl;

    // Declare the sum and product of the guess.
    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct.
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nTou win!";
        return true;
    }

    else
    {
        std::cout << "\nYou lose!";
        return false;
    }
}

int main()
{
    while (true)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear(); // Clears any error.
        std::cin.ignore(); // Discards the buffer.
    }
    
    return 0;
}