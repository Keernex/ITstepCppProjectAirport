#include "managers.h"

Managers::Managers()
{
	ready_work = true;
}

void Managers::input_manager(int index)
{
	cout << endl;
	cout << "Manager index: " << index << endl;
	cout << "Input name manager: ";
	cin >> name;
	cout << "Input surname manager: ";
	cin >> surname;
	cout << "Input age manager: ";
	cin >> age;
	ready_work = true;
	salary = 500;
}

vector<Managers> Managers::redaction_manager_index(int index, vector<Managers> managers)
{
	cout << endl;
	cout << "Manager index: " << index << endl;
	cout << "Enter new name: ";
	cin >> managers[index].name;
	cout << "Enter new surname: ";
	cin >> managers[index].surname;
	cout << "Enter new age: ";
	cin >> managers[index].age;
	return managers;
}

void Managers::print_manager(int index)
{
	cout << endl;
	cout << "Manager index: " << index << endl;
	cout << "Name manager: " << name << endl;
	cout << "Surname manager: " << surname << endl;
	cout << "Age manager: " << age << endl;
	if (ready_work)
	{cout << "Ready work manager: " << "Ready" << endl;}
	else
	{cout << "Ready work manager: " << " No ready" << endl;}
	cout << "Salary manager: " << salary << endl;
}

void Managers::search_manager_name(vector<Managers> managers)
{
	string surname;
	cout << "Enter surname manager: ";
	cin >> surname;
	for (int i = 0; i < managers.size(); i++)
	{
		if (managers[i].surname == surname)
		{
			cout << endl;
			cout << "Shop index: " << i << endl;
			cout << "Name manager: " << managers[i].name << endl;
			cout << "Surname manager: " << managers[i].surname << endl;
			cout << "Age manager: " << managers[i].age << endl;
			if (managers[i].ready_work)
			{cout << "Ready work manager: " << "Ready" << endl;}
			else
			{cout << "Ready work manager: " << " No ready" << endl;}
			cout << "Salary manager: " << managers[i].salary << endl;
		}
	}
}

vector<Managers> Managers::remove_manager(vector<Managers> managers)
{
	cout << endl;
	int index;
	cout << "Remove manager index: ";
	cin >> index;
	if (index >= 0 && index < managers.size())
	{
		managers.erase(managers.begin() + index);
	}
	return managers;
}