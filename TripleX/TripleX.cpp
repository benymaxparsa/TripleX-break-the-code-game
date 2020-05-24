#include <iostream>

int main() 
{
	// Print welcome messages to the console
	std::cout << "You're a hacker trying to breaking into the BadGuys corp servers in order to access their Data Bases" << std::endl;
	std::cout << "You need to find their passwords to continue..." << std::endl;

	// Declare 3 number code
	const int CodeA = 4;
	const int CodeB = 3;
	const int CodeC = 2;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;

	// Print sum and product to the console
	std::cout << std::endl;
	std::cout << "+ There are 3 numbers in the code" << std::endl;
	std::cout << "+ The code add-up to: " << CodeSum << std::endl;
	std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

	int GuessA, GuessB, GuessC;
	std::cin >> GuessA >> GuessB >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (CodeSum == GuessSum && CodeProduct == GuessProduct)
	{
		std::cout << "Nice job! you breached into their server" << std::endl;
	}
	else
	{
		std::cout << "mission failed" << std::endl;
	}

	return 0;
}