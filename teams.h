#include "lib.h"

struct Teams
{
	bool ready_work;
	int money;

	Teams();
	void input_teams(int index);
	void input_busy_teams(int index);
	void print_teams(int index);
	vector<Teams> remove_teams(vector<Teams> teams, int index);
};

