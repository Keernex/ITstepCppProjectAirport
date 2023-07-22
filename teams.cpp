#include "teams.h"

Teams::Teams()
{
	ready_work = false;
	money = 0;
}

void Teams::input_teams(int index)
{
	cout << "Team index: " << index << endl;
	cout << endl;
	ready_work = true;
	money = 2500;
}

void Teams::input_busy_teams(int index)
{
	cout << "Team index: " << index << endl;
	cout << endl;
	ready_work = false;
	money = 2500;
}

void Teams::print_teams(int index)
{
	cout << "Team index: " << index << endl;

	if (ready_work)
	{
		cout << "Ready work room: " << "Ready" << endl;
	}
	else
	{
		cout << "Ready work room: " << " No ready" << endl;
	}
	cout << "Salary room: " << money << endl;
	cout << endl;
}


vector<Teams> Teams::remove_teams(vector<Teams> teams, int index)
{
	if (index >= 0 && index < teams.size())
	{
		teams.erase(teams.begin() + index);
	}
	return teams;
}
