#include "shops.h"

struct FileShops
{
	fstream file;
	bool save_shop(vector<Shops> shops, int count);
	bool load_shop(vector<Shops>& shops, int& count);
};


