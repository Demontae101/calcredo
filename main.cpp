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
	std::cout << "hello! enter your weight and i'll tell you how much you would weigh on mars.:\n";
	std::cin >> earthWeight;

	marsWeight = earthWeight * 0.38;

	std::cout << "your weight on mars would be: \n";
	return marsWeight

}
int main()
{
	stdcout << converter();
}