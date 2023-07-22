#include "parking.h"

Parking::Parking()
{
	srand(time(0));
	spaces = 100;
	fileparking.load_parking_spaces(spaces);
	if (spaces > 100)
	{
		spaces = 100;
	}
	occupied_spaces = 20 + rand() % (spaces - 20 + 1);
	money = spaces * 20;
}

void Parking::input_spaces()
{
	while (true)
	{
		if (spaces < 20 || spaces > 100)
		{
			cout << "Enter a number between 20 and 100" << endl;
			cout << "Your parking spaces" << endl;
		}
		else
		{
			this->spaces = spaces;
			fileparking.save_parking_spaces(spaces);
			break;
		}
	}
}

void Parking::print_spaces()
{
	cout << "Your parking tickets: " << spaces << endl;
	cout << "How many parking spaces are occupied: " << occupied_spaces << endl;
	cout << "How much is the rent: " << money << endl;
	cout << endl;
}
