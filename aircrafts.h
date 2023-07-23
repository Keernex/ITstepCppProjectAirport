#include "lib.h"

#ifndef AIRCRAFTS_H
#define AIRCRAFTS_H

struct Aircrafts
{
	int number_aircrafts;
	int money;
	bool order_status;

	Aircrafts();
	void order_aircrafts();
	void print_aircrafts();
	void remove_aircrafts();
};


#endif