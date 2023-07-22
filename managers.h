#include "lib.h"

struct Managers
{
	string name;
	string surname;
	string age;
	bool ready_work;
	int money;

	Managers();
	void input_managers(int index);
	void print_managers(int index);
	void search_managers(vector<Managers> managers);
	vector<Managers> redaction_managers(vector<Managers> managers);
	vector<Managers> remove_managers(vector<Managers> managers);
};







