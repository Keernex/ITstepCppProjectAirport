#include "lib.h"


struct Shops
{
	string name_shop;
	int profit_shop;

	void input_shop(int index);
	vector<Shops> redaction_shop_index(int index, vector<Shops> shops);
	void print_shop(int index);
	void search_shop_name(vector<Shops> shops);
	vector<Shops> remove_shop(vector<Shops> shops);
};
