#include "accounting.h"

Accounting::Accounting()
{
	all_money = 0;
	net_profit = 0;
	today_total_plus = 0;
	today_total_losses = 0;
}

void Accounting::count_all_money()
{
	all_money = all_money + net_profit;
}

void Accounting::count_net_profit()
{
	net_profit = today_total_plus - today_total_losses;
}

void Accounting::count_today_total_plus()
{
	today_total_plus = today_total_plus + counting_money(shops);
	if (aircrafts.order_status)
	{
		today_total_plus = today_total_plus + aircrafts.net_price;
	}
}

void Accounting::count_today_total_losses()
{
	if (!aircrafts.order_status)
	{
		today_total_losses = today_total_losses + aircrafts.net_price;
	}
	today_total_losses = today_total_losses + customs.money;
	today_total_losses = today_total_losses + recreationhall.money;
	today_total_losses = today_total_losses + counting_money(all_teams);
	today_total_losses = today_total_losses + parking.money;
	today_total_losses = today_total_losses + control_rooms(rooms);
	today_total_losses = today_total_losses + counting_money(managers);
}

template<typename T>
int Accounting::counting_money(vector<T> items)
{
	int amount_money = 0;
	for (int i = 0; i < items.size(); i++)
	{
		amount_money = amount_money + items[i].money;
	}
	return amount_money;
}