#include "parking.h"
#include "file_shops.h"
#include "file_managers.h"


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
	FileManagers file_managers;
	Managers managers_funk;
	vector<Managers> managers;
	int count = 0;
	file_managers.load_manager(managers, count);
	do
	{
		int q = 0;
		cout << "Enter number: ";
		cin >> q;
		if (q == 1)
		{
			if (managers.size() == 0)
			{
				cout << "Enter count: ";
				cin >> count;
				managers.resize(count);
				for (int i = 0; i < count; i++)
				{
					managers[i].input_manager(i);
				}
			}
			else
			{
				cout << "How many employees do you want to add?" << endl;
				cout << "Enter count: ";
				int add_count;
				cin >> add_count;
				managers.resize(count + add_count);
				for (int i = count; i < count + add_count; i++)
				{
					managers[i].input_manager(i);
				}count = managers.size();
			}
			file_managers.save_manager(managers, count);
		}
		if (q == 2)
		{
			int index;
			cout << "Enter index: ";
			cin >> index;
			managers = managers_funk.redaction_manager_index(index, managers);
			file_managers.save_manager(managers, count);
		}
		if (q == 3)
		{
			for (int i = 0; i < count; i++)
			{
				managers[i].print_manager(i);
			}
		}
		if (q == 4)
		{
			managers_funk.search_manager_name(managers);
		}
		if (q == 5)
		{
			managers = managers_funk.remove_manager(managers);
		}
		if (q == 6)
		{
			break;
		}
	} while (true);
}





