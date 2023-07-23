#include "shops.h"

Shops::Shops()
{
	money = 0;
}

void Shops::input_shop(int occupied_spaces)
{
	money = occupied_spaces / 4 * (rand() % 50);
}

void Shops::print_shop(int index)
{
	cout << endl;
    cout << "Shop index: " << index << endl;
	cout << "Profit shop: " << money << endl;
}
