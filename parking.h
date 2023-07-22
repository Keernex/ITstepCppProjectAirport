#include "file_parking.h"


struct Parking
{
	int spaces;
	int occupied_spaces;
	int money;

	FileParking fileparking;

	Parking();
	void input_spaces();
	void print_spaces();
};











