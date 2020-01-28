#include <iostream>

int main()
{
    // print introduction messages to terminal
    std::cout << "This is the fifth day now that Jimmy has beaten me at cracking top secret forgotten account passwords." << std::endl;
    std::cout << "Today, I change that." << std::endl;

    // Declare a 3 number code
    int CodeA = 4;
    int CodeB = 5;
    int CodeC = 7;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;
    
    // print sum and product to terminal
    std::cout << "There are 3 numbers in each password" << std::endl;
    std::cout << "The three codes add-up to: " << CodeSum << std::endl;
    std::cout << "The codes multiply to give: " << CodeProduct << std::endl;

    int PlayerGuess;

    std::cin >> PlayerGuess;
    std::cout << "Your guess is: " << PlayerGuess;
    
    return 0;
}