#include "control_room.h"


struct FileControlRooms
{
	fstream file;
	bool save_rooms(vector<ControlRooms> rooms, int count);
	bool load_rooms(vector<ControlRooms>& rooms, int& count);
};

