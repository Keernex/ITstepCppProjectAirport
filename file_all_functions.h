#ifndef FILE_ALL_FUNCTIONS_H
#define FILE_ALL_FUNCTIONS_H

#include "lib.h"

#include "accounting.h"

#include "managers.h"
#include "control_room.h"

#include "aircrafts.h"
#include "teams.h"

#include "customs.h"
#include "parking.h"
#include "recreation_hall.h"
#include "shops.h"


struct FileAllFunctions
{
	fstream file;

	bool Check_file_empty(string filename);

	bool save_elements(vector<Managers> items, int count, string filename);
	bool load_elements(vector<Managers>& items, int& count, string filename);

	bool save_elements(vector<ControlRooms> items, int count, string filename);
	bool load_elements(vector<ControlRooms>& items, int& count, string filename);

	bool save_elements(vector<Teams> items, int count, string filename);
	bool load_elements(vector<Teams>& items, int& count, string filename);

	bool save_elements(vector<Shops> items, int count, string filename);
	bool load_elements(vector<Shops>& items, int& count, string filename);


	bool save_element(int items, string filename);
	bool load_element(int& items, string filename);


	bool save_element(string items, string filename);
	bool load_element(string& items, string filename);
};


#endif