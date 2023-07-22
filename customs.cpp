#include "customs.h"

void Customs::input_customs(int occupied_spaces)
{
	number_people = occupied_spaces * 4;
	money = number_people * 50;
}

void Customs::print_customs()
{
	cout << endl;
	cout << "Customs people: " << number_people << endl;
	cout << "Damages: " << money << endl;
}