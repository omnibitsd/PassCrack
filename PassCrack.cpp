#include <iostream>

int main()
{
    // print introduction messages to terminal
    std::cout << "This is the fifth day now that Jimmy has beaten me at cracking top secret forgotten account passwords." << std::endl;
    std::cout << "Today, I change that." << std::endl;

    // Declare a 3 number code
    int CodeA = 4, CodeB = 5, CodeC = 7;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;
    
    // print sum and product to terminal
    std::cout << "There are 3 numbers in each password" << std::endl;
    std::cout << "The three codes add-up to: " << CodeSum << std::endl;
    std::cout << "The codes multiply to give: " << CodeProduct << std::endl;

    int PlayerGuess;
    int GuessA, GuessB, GuessC;

    std::cout << "Please enter your guess below using a space between each digit e.g X X X.";
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    return 0;
}