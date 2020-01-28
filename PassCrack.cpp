#include <iostream>

void PrintIntroduction()
{
    // print introduction messages to terminal
    std::cout << "This is the fifth day now that Jimmy has beaten me at cracking top secret forgotten account passwords.\n";
    std::cout << "Today, I change that.\n";
}

void PlayGame()
{
    // Declare a 3 number code
    int CodeA = 4, CodeB = 5, CodeC = 7;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;
    
    // print sum and product to terminal
    std::cout << "There are 3 numbers in each password";
    std::cout << "\nThe three codes add-up to: " << CodeSum;
    std::cout << "\nThe codes multiply to give: " << CodeProduct;

    int PlayerGuess;
    int GuessA, GuessB, GuessC;

    std::cout << "\nPlease enter your guess below using a space between each digit e.g X X X.\n";
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nyou win!";  
    }
    else 
    {
        std::cout << "\nNice try but you are wrong!";
    }
}

int main()
{
    PrintIntroduction();
    PlayGame();
    return 0;
}