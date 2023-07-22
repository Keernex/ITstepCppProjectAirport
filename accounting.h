#include "managers.h"
#include "control_room.h"

#include "aircraft.h"
#include "teams.h"

#include "customs.h"
#include "parking.h"
#include "recreation_hall.h"
#include "shops.h"


struct Accounting
{
	int all_money;
	int net_profit;
	int today_total_plus;
	int today_total_losses;

	Accounting();
	void count_today_total_losses();
	void count_today_total_plus();
	void count_net_profit();
	void count_all_money();

	template<typename T>
	int counting_money(vector<T> items);
};