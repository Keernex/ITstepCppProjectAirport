#include "teams.h"


struct FileTeams
{
	fstream file;
	bool save_teams(vector<Teams> teams, int count);
	bool load_teams(vector<Teams>& teams, int& count);
};