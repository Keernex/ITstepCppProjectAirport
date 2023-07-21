#include "lib.h"

struct Teams
{
	bool ready_work;
	int salary;

	void input_teams(int index);
	void print_teams(int index);
	vector<Teams> remove_teams(vector<Teams> teams);
};

