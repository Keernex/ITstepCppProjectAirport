#include "lib.h"


struct FileManagers
{
	fstream file;
	bool save_manager(vector<Managers> managers, int count);
	bool load_manager(vector<Managers>& managers, int& count);
};






