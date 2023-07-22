#include "parking.h"

Parking::Parking()
{
	srand(time(0));
	spaces = 100;
	occupied_spaces = 20 + rand() % (spaces - 20 + 1);
	money = spaces * 20;
}

void Parking::input_spaces(int number)
{
	srand(time(0));
	spaces = number;
	int occupied_spaces = 20 + rand() % (spaces - 20 + 1);
	money = spaces * 20;
}

void Parking::random_spaces()
{
	srand(time(0));
	occupied_spaces = 20 + rand() % (spaces - 20 + 1);
	money = spaces * 20;
}

void Parking::print_spaces()
{
	cout << "Your parking tickets: " << spaces << endl;
	cout << "How many parking spaces are occupied: " << occupied_spaces << endl;
	cout << "How much is the rent: " << money << endl;
	cout << endl;
}
