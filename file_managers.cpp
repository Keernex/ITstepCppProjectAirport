#include "file_managers.h"


bool FileManagers::save_manager(vector<Managers> managers, int count)
{
	file.open("managers.bin", ios::out | ios::binary);
	if (file.is_open())
	{
		file.write((char*)&count, sizeof(int));
		for (size_t i = 0; i < count; i++)
		{
			file.write((char*)&managers[i], sizeof(Managers));
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
bool FileManagers::load_manager(vector<Managers>& managers, int& count)
{
	file.open("managers.bin", ios::in | ios::binary);
	file.read((char*)&count, sizeof(int));
	managers.resize(count);
	if (file.is_open())
	{
		for (size_t i = 0; i < count; i++)
		{
			file.read((char*)&managers[i], sizeof(Managers));
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









