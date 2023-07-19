#include "file_shops.h"



bool FileShops::save_shop(vector<Shops> shops, int count)
{
	file.open("shops.bin", ios::out | ios::binary);
	if (file.is_open())
	{
		file.write((char*)&count, sizeof(int));
		for (size_t i = 0; i < count; i++)
		{
			file.write((char*)&shops[i], sizeof(Shops));
		}
		file.close();
		cout << "Person was saved..." << endl;
		return true;
	}
	else
	{
		cout << "Error opening file!" << endl;
		return false;
	}
}
bool FileShops::load_shop(vector<Shops>& shops, int& count)
{
	file.open("shops.bin", ios::in | ios::binary);
	file.read((char*)&count, sizeof(int));
	shops.resize(count);
	if (file.is_open())
	{
		for (size_t i = 0; i < count; i++)
		{
			file.read((char*)&shops[i], sizeof(Shops));
		}
		file.close();
		return true;
	}
	else
	{
		cout << "Error opening file!" << endl;
		return false;
	}
}
