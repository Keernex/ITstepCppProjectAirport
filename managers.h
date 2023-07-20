#include "file_managers.h"


struct Managers
{
	string name;
	string surname;
	string age;
	bool ready_work;
	int salary;

	Managers();
	void input_manager(int index);
	vector<Managers> redaction_manager_index(int index, vector<Managers> managers);
	void print_manager(int index);
	void search_manager_name(vector<Managers> managers);
	vector<Managers> remove_manager(vector<Managers> managers);
};







