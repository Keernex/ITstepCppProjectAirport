#include "parking.h"
#include "file_shops.h"
#include "file_managers.h"
#include "file_teams.h"


void main()
{
	//Parking parking;
	//do
	//{
	//	int q = 0;
	//	cout << "Enter number: ";
	//	cin >> q;
	//	if (q == 1)
	//	{
	//		int w;
	//		cout << "Enter parking: ";
	//		cin >> w;
	//		parking.input_parking_spaces(w);
	//	}
	//	if (q == 2)
	//	{
	//		parking.print_parking();
	//	}
	//	if (q == 3)
	//	{
	//		break;
	//	}
	//} while (true);
	//FileShops file_shops;
	//Shops shops_funk;
	//vector<Shops> shops;
	//int count = 10;
	//file_shops.load_shop(shops,count);
	//do
	//{
	//	int q = 0;
	//	cout << "Enter number: ";
	//	cin >> q;
	//	if (q == 1)
	//	{
	//		for (int i = 0; i < count; i++)
	//		{
	//			shops[i].input_shop(i);
	//		}
	//		file_shops.save_shop(shops, count);
	//	}
	//	if (q == 2)
	//	{
	//		int index;
	//		cout << "Enter index: ";
	//		cin >> index;
	//		shops = shops_funk.redaction_shop_index(index, shops);
	//		file_shops.save_shop(shops, count);
	//	}
	//	if (q == 3)
	//	{
	//		for (int i = 0; i < count; i++)
	//		{
	//			shops[i].print_shop(i);
	//		}
	//	}
	//	if (q == 4)
	//	{
	//		shops_funk.search_shop_name(shops);
	//	}
	//	if (q == 5)
	//	{
	//		shops = shops_funk.remove_shop(shops);
	//	}
	//	if (q == 6)
	//	{
	//		break;
	//	}
	//} while (true);
	//FileManagers file_managers;
	//Managers managers_funk;
	//vector<Managers> managers;
	//int count = 0;
	//file_managers.load_manager(managers, count);
	//do
	//{
	//	int q = 0;
	//	cout << "Enter number: ";
	//	cin >> q;
	//	if (q == 1)
	//	{
	//		if (managers.size() == 0)
	//		{
	//			cout << "Enter count: ";
	//			cin >> count;
	//			managers.resize(count);
	//			for (int i = 0; i < count; i++)
	//			{
	//				managers[i].input_manager(i);
	//			}
	//		}
	//		else
	//		{
	//			cout << "How many employees do you want to add?" << endl;
	//			cout << "Enter count: ";
	//			int add_count;
	//			cin >> add_count;
	//			managers.resize(count + add_count);
	//			for (int i = count; i < count + add_count; i++)
	//			{
	//				managers[i].input_manager(i);
	//			}count = managers.size();
	//		}
	//		file_managers.save_manager(managers, count);
	//	}
	//	if (q == 2)
	//	{
	//		int index;
	//		cout << "Enter index: ";
	//		cin >> index;
	//		managers = managers_funk.redaction_manager_index(index, managers);
	//		file_managers.save_manager(managers, count);
	//	}
	//	if (q == 3)
	//	{
	//		for (int i = 0; i < count; i++)
	//		{
	//			managers[i].print_manager(i);
	//		}
	//	}
	//	if (q == 4)
	//	{
	//		managers_funk.search_manager_name(managers);
	//	}
	//	if (q == 5)
	//	{
	//		managers = managers_funk.remove_manager(managers);
	//	}
	//	if (q == 6)
	//	{
	//		break;
	//	}
	//} while (true);
	//FileManagers file_managers;
	//Managers managers_funk;
	//vector<Managers> managers;
	//int count = 0;
	//file_managers.load_manager(managers, count);
	//do
	//{
	//	int q = 0;
	//	cout << "Enter number: ";
	//	cin >> q;
	//	if (q == 1)
	//	{
	//		if (managers.size() == 0)
	//		{
	//			cout << "Enter count: ";
	//			cin >> count;
	//			managers.resize(count);
	//			for (int i = 0; i < count; i++)
	//			{
	//				managers[i].input_manager(i);
	//			}
	//		}
	//		else
	//		{
	//			cout << "How many employees do you want to add?" << endl;
	//			cout << "Enter count: ";
	//			int add_count;
	//			cin >> add_count;
	//			managers.resize(count + add_count);
	//			for (int i = count; i < count + add_count; i++)
	//			{
	//				managers[i].input_manager(i);
	//			}count = managers.size();
	//		}
	//		file_managers.save_manager(managers, count);
	//	}
	//	if (q == 2)
	//	{
	//		int index;
	//		cout << "Enter index: ";
	//		cin >> index;
	//		managers = managers_funk.redaction_manager_index(index, managers);
	//		file_managers.save_manager(managers, count);
	//	}
	//	if (q == 3)
	//	{
	//		for (int i = 0; i < count; i++)
	//		{
	//			managers[i].print_manager(i);
	//		}
	//	}
	//	if (q == 4)
	//	{
	//		managers_funk.search_manager_name(managers);
	//	}
	//	if (q == 5)
	//	{
	//		managers = managers_funk.remove_manager(managers);
	//	}
	//	if (q == 6)
	//	{
	//		break;
	//	}
	//} while (true);
	FileTeams file_teams;
	Teams teams_funk;
	vector<Teams> teams;
	vector<Teams> all_teams;
	int all_count = 0;
	int count = 0;
	file_teams.load_teams(teams, count);
	do
	{
		cout << "1 - Add team" << endl;
		cout << "2 - print all team" << endl;
		cout << "3 - print ready team" << endl;
		cout << "4 - Remuve team" << endl;
		cout << "5 - end" << endl;
		int q = 0;
		cout << "Enter number: ";
		cin >> q;
		if (q == 1)
		{
			cout << "How many teams are needed?" << endl;
			int new_count;
			cout << "Enter count: ";
			cin >> new_count;
			teams.resize(count + new_count);
			for (int i = count; i < new_count; i++)
			{
				teams[i].input_teams(i);
			}count = count + new_count;
			file_teams.save_teams(teams, count);
		}
		if (q == 2)
		{
			for (int i = 0; i < all_count; i++)
			{
				all_teams[i].print_teams(i);
			}
		}
		if (q == 3)
		{
			for (int i = 0; i < count; i++)
			{
				teams[i].print_teams(i);
			}
		}
		if (q == 4)
		{
			teams = teams_funk.remove_teams(teams);
			count--;
			file_teams.save_teams(teams, count);
		}
		if (q == 5)
		{
			break;
		}
	} while (true);
}





