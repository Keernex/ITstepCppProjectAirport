#include "recreation_hall.h"

RecreationHall::RecreationHall()
{
	number_people = 0;
	money = 5000;
}

RecreationHall::RecreationHall(int number_people)
{
	this->number_people = number_people;
}

void RecreationHall::print_recreation_hall()
{
	cout << "Number of people at recreation hall: " << number_people << endl;
	cout << endl;
}
