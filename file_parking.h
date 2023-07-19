#include "lib.h"

struct FileParking
{
	fstream file;

	bool save_parking_spaces(int parking_spaces);
	bool load_parking_spaces(int& parking_spaces);
};













