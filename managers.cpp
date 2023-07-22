#include "managers.h"

Managers::Managers()
{
	ready_work = true;
}

void Managers::input_managers(int index)
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
	money = 500;
}

void Managers::print_managers(int index)
{
	cout << endl;
	cout << "Manager index: " << index << endl;
	cout << "Name manager: " << name << endl;
	cout << "Surname manager: " << surname << endl;
	cout << "Age manager: " << age << endl;
	if (ready_work)
	{
		cout << "Ready work manager: " << "Ready" << endl;
	}
	else
	{
		cout << "Ready work manager: " << " No ready" << endl;
	}
	cout << "Salary manager: " << money << endl;
}

void Managers::search_managers(vector<Managers> managers)
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
			{
				cout << "Ready work manager: " << "Ready" << endl;
			}
			else
			{
				cout << "Ready work manager: " << " No ready" << endl;
			}
			cout << "Salary manager: " << managers[i].money << endl;
		}
	}
}

vector<Managers> Managers::redaction_managers(vector<Managers> managers, int index)
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

vector<Managers> Managers::remove_managers(vector<Managers> managers,int index)
{
	if (index >= 0 && index < managers.size())
	{
		managers.erase(managers.begin() + index);
	}
	return managers;
}