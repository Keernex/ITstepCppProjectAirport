#include "teams.h"

void Teams::input_teams(int index)
{
	cout << "Team index: " << index << endl;
	cout << endl;
	ready_work = true;
	salary = 2500;
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
	cout << "Salary room: " << salary << endl;
	cout << endl;
}


vector<Teams> Teams::remove_teams(vector<Teams> teams)
{
	cout << endl;
	int index;
	cout << "Remove teams index: ";
	cin >> index;
	if (index >= 0 && index < teams.size())
	{
		teams.erase(teams.begin() + index);
	}
	return teams;
}