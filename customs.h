#include "lib.h"

#ifndef CUSTOMS_H
#define CUSTOMS_H

struct Customs
{
	int number_people;
	int money;

	void input_customs(int occupied_spaces);
	void print_customs();
};

#endif