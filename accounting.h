#include "managers.h"
#include "control_room.h"

#include "aircrafts.h"
#include "teams.h"

#include "customs.h"
#include "parking.h"
#include "recreation_hall.h"
#include "shops.h"

#ifndef ACCOUNTING_H
#define ACCOUNTING_H

struct Accounting
{
	int all_money;
	int net_profit;
	int today_total_plus;
	int today_total_losses;

	Accounting();
	void count_today_total_losses(vector<Managers> managers, vector<ControlRooms> rooms, vector<Teams> busy_teams, vector<Teams> teams, int customs_money, int recreationhall_money, int parking_money);
	void count_today_total_plus(vector<Shops> shops, vector<Teams> busy_teams);
	void count_net_profit();
	void count_all_money();

	void print_accounting();

	template<typename T>
	int counting_money(vector<T> items);
};

#endif