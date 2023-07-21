#include "file_teams.h"


bool FileTeams::save_teams(vector<Teams> teams, int count)
{
	file.open("teams.bin", ios::out | ios::binary);
	if (file.is_open())
	{
		file.write((char*)&count, sizeof(int));
		for (size_t i = 0; i < count; i++)
		{
			file.write((char*)&teams[i], sizeof(Teams));
		}
		file.close();
		cout << "Team was saved..." << endl;
		return true;
	}
	else
	{
		cout << "Error opening file!" << endl;
		return false;
	}
}
bool FileTeams::load_teams(vector<Teams>& teams, int& count)
{
	file.open("teams.bin", ios::in | ios::binary);
	file.read((char*)&count, sizeof(int));
	teams.resize(count);
	if (file.is_open())
	{
		for (size_t i = 0; i < count; i++)
		{
			file.read((char*)&teams[i], sizeof(Teams));
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
