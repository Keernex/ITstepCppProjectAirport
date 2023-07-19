#include "parking.h"

Parking::Parking()
{
	srand(time(0));
	parking_spaces = 100;
	fileparking.load_parking_spaces(parking_spaces);
	if (parking_spaces > 100)
	{
		parking_spaces = 100;
	}
	occupied_parking_spaces = 20 + rand() % (parking_spaces - 20 + 1);
	land_rent = parking_spaces * 20;
}

void Parking::input_parking_spaces(int parking_spaces)
{
	while (true)
	{
		if (parking_spaces < 20 || parking_spaces > 100)
		{
			cout << "Enter a number between 20 and 100" << endl;
			cout << "Your parking spaces" << endl;
		}
		else
		{
			this->parking_spaces = parking_spaces;
			fileparking.save_parking_spaces(parking_spaces);
			break;
		}
	}
}

void Parking::print_parking()
{
	cout << "Your parking tickets: " << parking_spaces << endl;
	cout << "How many parking spaces are occupied: " << occupied_parking_spaces << endl;
	cout << "How much is the rent: " << land_rent << endl;
	cout << endl;
}
