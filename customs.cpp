#include "customs.h"

Customs::Customs()
{
	number_people = 0;
}

Customs::Customs(int number_people)
{
	this->number_people = number_people;
}

void Customs::print_customs()
{
	cout << "Number of people at customs: " << number_people << endl;
	cout << endl;
}
