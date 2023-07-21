#include "file_control_room.h"


bool FileControlRooms::save_rooms(vector<ControlRooms> rooms, int count)
{
	file.open("rooms.bin", ios::out | ios::binary);
	if (file.is_open())
	{
		file.write((char*)&count, sizeof(int));
		for (size_t i = 0; i < count; i++)
		{
			file.write((char*)&rooms[i], sizeof(ControlRooms));
		}
		file.close();
		cout << "Room was saved..." << endl;
		return true;
	}
	else
	{
		cout << "Error opening file!" << endl;
		return false;
	}
}
bool FileControlRooms::load_rooms(vector<ControlRooms>& rooms, int& count)
{
	file.open("rooms.bin", ios::in | ios::binary);
	file.read((char*)&count, sizeof(int));
	rooms.resize(count);
	if (file.is_open())
	{
		for (size_t i = 0; i < count; i++)
		{
			file.read((char*)&rooms[i], sizeof(ControlRooms));
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
