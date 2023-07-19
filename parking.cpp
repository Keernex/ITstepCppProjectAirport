#include "parking.h"

Parking::Parking()
{
	parking_spaces = 100;
	occupied_parking_spaces = 20 + rand() % (parking_spaces - 20 + 1);
	land_rent = parking_spaces * 20;
}

Parking::Parking(int parking_spaces)
{
	while (true)
	{
		if (parking_spaces < 21 || parking_spaces > 100)
		{
			cout << "Enter a number between 0 and 100" << endl;
			cout << "Your parking spaces" << endl;
		}
		else
		{
			this->parking_spaces = parking_spaces;
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
