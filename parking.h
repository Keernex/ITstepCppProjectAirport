#include "file_parking.h"


struct Parking
{
	int parking_spaces;
	int occupied_parking_spaces;
	int money;

	FileParking fileparking;

	Parking();
	void input_parking(int parking_spaces);
	void print_parking();
};











