#include "file_parking.h"



bool FileParking::save_parking_spaces(int parking_spaces)
{
	file.open("parking.bin", ios::out | ios::binary);
	if (!file.is_open())
	{
		cout << "Error opening file!" << endl;
		return false;
	}
	file.write((char*)&parking_spaces, sizeof(parking_spaces));
	file.close();
	return true;
}

bool FileParking::load_parking_spaces(int& parking_spaces)
{
	file.open("parking.bin", ios::in | ios::binary);
	if (!file.is_open())
	{
		cout << "Error opening file!" << endl;
		return false;
	}
	file.read((char*)&parking_spaces, sizeof(parking_spaces));
	file.close();
	return true;
}