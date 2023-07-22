#include "recreation_hall.h"

void RecreationHall::input_recreation_hall(int occupied_spaces)
{
	number_people = occupied_spaces * 4;
	money = number_people * 5;
}

void RecreationHall::print_recreation_hall()
{
	cout << endl;
	cout << "Recreation hall people: " << number_people << endl;
	cout << "Damages: " << money << endl;
}
