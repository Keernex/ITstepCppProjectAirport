#include "lib.h"

#ifndef CONTROL_ROOM_H
#define CONTROL_ROOM_H

struct ControlRooms
{
	bool ready_work;
	int money;

	ControlRooms();
	void input_rooms(int index);
	void print_rooms(int index);
	vector<ControlRooms> remove_rooms(vector<ControlRooms> rooms, int index);
};

#endif
