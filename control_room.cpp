#include "control_room.h"

ControlRooms::ControlRooms()
{
	ready_work = false;
	money = 0;
}

void ControlRooms::input_roosm(int index)
{
	cout << endl;
	cout << "Room index: " << index << endl;
	ready_work = true;
	money = 2500;
}

void ControlRooms::print_rooms(int index)
{
	cout << endl;
	cout << "Room index: " << index << endl;
	if (ready_work)
	{
		cout << "Ready work room: " << "Ready" << endl;
	}
	else
	{
		cout << "Ready work room: " << " No ready" << endl;
	}
	cout << "Salary room: " << money << endl;
}


vector<ControlRooms> ControlRooms::remove_rooms(vector<ControlRooms> rooms)
{
	cout << endl;
	int index;
	cout << "Remove rooms index: ";
	cin >> index;
	if (index >= 0 && index < rooms.size())
	{
		rooms.erase(rooms.begin() + index);
	}
	return rooms;
}

