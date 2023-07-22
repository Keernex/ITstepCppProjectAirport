#include "aircraft.h"

Aircrafts::Aircrafts()
{
	number_aircrafts = 0;
	money = 0;
	order_status = false;
}

void Aircrafts::order_aircrafts()
{
	srand(time(0));
	number_aircrafts = rand() % 10;
	money = number_aircrafts * 50000;
	order_status = false;
}

void Aircrafts::print_aircrafts()
{
	cout << "Number aircrafts: " << number_aircrafts << endl;
	cout << "Net price: " << money << endl;
	if (order_status)
	{cout << "Order status: " << "Ready" << endl;}
	else
	{cout << "Order status: " << "No ready" << endl;}

}

void Aircrafts::remove_aircrafts()
{
	number_aircrafts = 0;
	money = 0;
	order_status = false;
}
