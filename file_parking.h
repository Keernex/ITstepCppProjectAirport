#include "parking.h"

struct FileParking
{
	fstream file;

	bool Write(int parking_spaces)
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
	bool Read(int& parking_spaces)
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
};













