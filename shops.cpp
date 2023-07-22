#include "shops.h"

void Shops::input_shop(int occupied_spaces,int index)
{
	srand(time(0));
	cout << "Shop index: " << index << endl;
	money = occupied_spaces/4 * (rand() % 50);
	cout << "Profit: " << money << endl;
}

void Shops::print_shop(int index)
{
	cout << endl;
    cout << "Shop index: " << index << endl;
	cout << "Name shop: " << name_shop << endl;
	cout << "Profit shop: " << profit_shop << endl;
}
