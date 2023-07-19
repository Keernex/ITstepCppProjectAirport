#include "file_parking.h"


struct Parking
{
	int parking_spaces;
	int occupied_parking_spaces;
	int land_rent;

	FileParking fileparking;

	Parking();
	void input_parking_spaces(int parking_spaces);
	void print_parking();
};











