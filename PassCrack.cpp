#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    // print introduction messages to terminal
    std::cout << "\nToday is the day! Maybe I can finally get my promotion.";
    std::cout << "\nAs always with the start of the day I need to start at the bottom at level " << Difficulty << " password solving.";
    std::cout << "\nAh, here comes the call!\n";
}

bool PlayGame(int Difficulty)
{
    if (Difficulty == 1)
    {
    PrintIntroduction(Difficulty);
    }
    
    // Declare a 3 number code
    int CodeA = rand() % Difficulty + Difficulty, CodeB = rand() % Difficulty + Difficulty, CodeC = rand() % Difficulty + Difficulty;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;
    int Lives = 3;
    
    // print sum and product to terminal
    std::cout << "\nThere are 3 numbers in each password";
    std::cout << "\nThe three codes add-up to: " << CodeSum;
    std::cout << "\nThe codes multiply to give: " << CodeProduct;

    int PlayerGuess;
    int GuessA, GuessB, GuessC;

    std::cout << "\n\nPlease enter your guess below using a space between each digit e.g X X X.\n\n";
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n*** Great work. You are correct. Time to take it up a notch with this next call! ***\n";
        return true;
    }
    else 
    {
        --Lives //remove one life
        std::cout << "\n*** That is not the correct password but no time to waste. Here comes the next call! ***\n";
        return false;
    }
}

int main()
{
    srand(time(NULL)); // Create new random sequence based on time of day

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;
    
     while (LevelDifficulty <= MaxDifficulty && Lives > 0) //Loop game until max level is beaten or lives run out
    {

        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();// Clears any errors
        std::cin.ignore();//Discards the buffer

        if (bLevelComplete)
        {
            // increase level difficulty
            ++LevelDifficulty;
        }
        
    }

    std::cout << "\n Finally, I am the manager! Mwhahahaha...";

    return 0;
}