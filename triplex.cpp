#include <iostream>
#include <ctime>

void PrintIntroduction(int LevelDifficulty)
{
    // Print welcome message to the terminal.
    std::cout << "\n\nYou are a secrete agent breaking into a level " << LevelDifficulty;
    std::cout << " secure server room...\nEnter the correct code to continue...\n\n";
}

bool PlayGame(int LevelDifficulty)
{
    PrintIntroduction(LevelDifficulty);

    // Declare 3 number code.
    const int CodeA = rand() % LevelDifficulty + LevelDifficulty;
    const int CodeB = rand() % LevelDifficulty + LevelDifficulty;
    const int CodeC = rand() % LevelDifficulty + LevelDifficulty;

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
        std::cout << "\n*** Well done agent! You have extracted a file! Keep going! ***";
        return true;
    }

    else 
    {
        std::cout << "\n*** You entered a wrong! Carefully agent! Try again! ***";
        return false;
    }
}

int main()
{
    srand(time(NULL)); // Create a random sequence based on time of day.
    int LevelDifficulty = 1;
    int const MaxDifficulty = 3;

    while (LevelDifficulty <= MaxDifficulty) // Loop game until all levels completed.
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any error.
        std::cin.ignore(); // Discards the buffer.

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    std::cout << "\n*** Great work agent! You got all the files! Now get out of there! ***";
    return 0;
    
}