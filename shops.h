#include "lib.h"

#ifndef SHOPS_H
#define SHOPS_H

struct Shops
{
	int money;
	int occupied_spaces;

	void input_shop(int occupied_spaces);
	void print_shop(int index);
};


#endif