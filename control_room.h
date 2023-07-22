#include "lib.h"

struct ControlRooms
{
	bool ready_work;
	int money;

	ControlRooms();
	void input_rooms(int index);
	void print_rooms(int index);
	vector<ControlRooms> remove_rooms(vector<ControlRooms> rooms, int index);
};
