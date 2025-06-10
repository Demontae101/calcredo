/*
Name: Demontae Merrell
Date: 6/7/25
Desc: remake of the earthtomarsconverter calc


*/

#include <iostream>


float converter()
{
	float earthWeight;
	float marsWeight;
	float mercuryWeight;
	float venusWeight;
	float jupiterWeight;
	float saturnWeight;
	float uranusWeight;
	float neptuneWeight;
	int choice;
	std::cout << "let's see how much you would weigh on other planets. enter 1 for mercury,2 for venus, 3 for mars, 4 for jupiter, 5 for saturn, 6 for uranus, or 7 for neptune.\n";
	std::cin >> choice;

	if (choice == 1)
	{
		std::cout << "enter how much you weigh and i'll tell you how much you weight on mercury\n";
		std::cin >> earthWeight;

		mercuryWeight = earthWeight * 0.377;

		std::cout << "your weight on mercury would be:\n";

		return mercuryWeight;

	}

	if (choice == 2 ) 
	{
		std::cout << "enter your weight and i'll tell you how much you weigh on venus.:\n";
		std::cin >> earthWeight;

		venusWeight = earthWeight * 0.9;

		std::cout << "your weight on venus would be: \n";
		return venusWeight;
	}

	if (choice == 3) 
	{
		std::cout << "enter your weight and i'll tell you how much you would weigh on mars.: \n";
		std::cin >> earthWeight;

		marsWeight = earthWeight * 0.38;

		std::cout << "your weight on mars would be: \n";
		return marsWeight;
	}

	if (choice == 4)
	{
		std::cout << "enter your weight and i'll tell you how much you would weigh on jupiter: \n";
		std::cin >> earthWeight;

		jupiterWeight = earthWeight * 2.4;

		std::cout << "your weight on jupiter would be: \n";
		return jupiterWeight;
	}

	if (choice == 5)
	{
		std::cout << "enter your weight and i'll tell you how much you would weigh on saturn: \n";
		std::cin >> earthWeight;

		saturnWeight = earthWeight * 1.08;

		std::cout << "your weight on saturn would be: \n";
		return saturnWeight;
	}

	if (choice == 6)
	{
		std::cout << "enter your weight and i'll tell you how much you would weigh on uranus: \n";
		std::cin >> earthWeight;

		uranusWeight = earthWeight * 0.86;

		std::cout << "your weight on uranus would be: \n";
		return uranusWeight;
	}

	if (choice == 7)
	{
		std::cout << "enter your weight and i'll tell you how much you would weigh on neptune: \n";
		std::cin >> earthWeight;

		neptuneWeight = earthWeight * 1.10;

		std::cout << "your weight on neptune would be: \n";
		return neptuneWeight;
	}

	if (choice > 7)
		{
		std::cout << "invalid choice, please try again.\n";
		return 0.0f; // Return 0.0f for invalid choice
	}
		

}

	int main()
	{
		int choice;

		std::cout << converter();
	}