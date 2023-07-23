#include "lib.h"

#ifndef PARKING_H
#define PARKING_H

struct Parking
{
	int spaces;
	int money;
	int occupied_spaces;

	Parking();
	void input_spaces(int number);
	void random_spaces();
	void print_spaces();
};


#endif








