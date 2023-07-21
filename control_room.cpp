#include "control_room.h"

void ControlRooms::input_control_room(int index)
{
	cout << endl;
	cout << "Room index: " << index << endl;
	ready_work = true;
	salary = 2500;
}

void ControlRooms::print_control_room(int index)
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
	cout << "Salary room: " << salary << endl;
}


vector<ControlRooms> ControlRooms::remove_control_room(vector<ControlRooms> rooms)
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