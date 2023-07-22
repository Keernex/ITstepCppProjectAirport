#include "managers.h"
#include "control_room.h"

#include "aircraft.h"
#include "teams.h"

#include "customs.h"
#include "parking.h"
#include "recreation_hall.h"
#include "shops.h"


struct FileAllFunctions
{
	fstream file;

	bool Check_file_empty(string filename);

	template<typename T>
	bool save_element(T items, string filename);

	template<typename T>
	bool load_element(T& items, string filename);

	template<typename T>
	bool save_elements(vector<T> items, int count, string filename);

	template<typename T>
	bool load_elements(vector<T> items, int& count, string filename);
};
