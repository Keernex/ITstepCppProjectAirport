#include "lib.h"

struct ControlRooms
{
	bool ready_work;
	int salary;

	void input_control_room(int index);
	void print_control_room(int index);
	vector<ControlRooms> remove_control_room(vector<ControlRooms> rooms);
};
