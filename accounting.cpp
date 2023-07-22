#include "accounting.h"

Accounting::Accounting()
{
	all_money = 0;
	net_profit = 0;
	today_total_plus = 0;
	today_total_losses = 0;
}

void Accounting::count_today_total_losses(vector<Managers> managers, vector<ControlRooms> rooms, vector<Teams> busy_teams, vector<Teams> teams, int customs_money, int recreationhall_money, int parking_money)
{
	if (busy_teams.size() <= 0)
	{
		today_total_losses = today_total_losses + (busy_teams.size() * 50000);
	}
	today_total_losses = today_total_losses + customs_money;
	today_total_losses = today_total_losses + recreationhall_money;
	today_total_losses = today_total_losses + parking_money;

	today_total_losses = today_total_losses + counting_money(busy_teams);
	today_total_losses = today_total_losses + counting_money(teams);
	today_total_losses = today_total_losses + counting_money(rooms);
	today_total_losses = today_total_losses + counting_money(managers);
}

void Accounting::count_today_total_plus(vector<Shops> shops, vector<Teams> busy_teams)
{
	today_total_plus = today_total_plus + counting_money(shops);
	if (busy_teams.size() > 0)
	{
		today_total_plus = today_total_plus + (busy_teams.size() * 50000);
	}
}

void Accounting::count_net_profit()
{
	net_profit = today_total_plus - today_total_losses;
}

void Accounting::count_all_money()
{
	all_money = all_money + net_profit;
}

void Accounting::print_accounting()
{
	cout << "All your money" << all_money << endl;
	cout << "All your net profit" << net_profit << endl;
	cout << "All your today total plus" << today_total_plus << endl;
	cout << "All your today total losses" << today_total_losses << endl;
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