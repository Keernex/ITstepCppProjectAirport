#include "shops.h"

void Shops::input_shop(int index)
{
    srand(time(0));
	cout << endl;
	cout << "Shop index: " << index << endl;
	cout << "Input name shop: ";
	cin >> name_shop;
    profit_shop = 100 + rand() % 500;
}

vector<Shops> Shops::redaction_shop_index(int index, vector<Shops> shops)
{
    cout << endl;
    cout << "Shop index: " << index << endl;
    cout << "Enter new name: ";
    cin >> shops[index].name_shop;
	return shops;
}

void Shops::print_shop(int index)
{
	cout << endl;
    cout << "Shop index: " << index << endl;
	cout << "Name shop: " << name_shop << endl;
	cout << "Profit shop: " << profit_shop << endl;
}

void Shops::search_shop_name(vector<Shops> shops)
{
    string name_shop;
    cout << "Enter name shop: ";
    cin >> name_shop;
    for (int i = 0; i < shops.size(); i++)
    {
        if (shops[i].name_shop == name_shop)
        {
            cout << endl;
            cout << "Shop index: " << i << endl;
            cout << "Name shop: " << shops[i].name_shop << endl;
            cout << "Profit shop: " << shops[i].profit_shop << endl;
        }
    }
}

vector<Shops> Shops::remove_shop(vector<Shops> shops)
{
    cout << endl;
    int index;
    cout << "Enter index: ";
    cin >> index;
    if (index >= 0 && index < shops.size())
    {
        shops.erase(shops.begin() + index);
    }
    return shops;
}
