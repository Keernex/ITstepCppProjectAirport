#include "file_all_functions.h"
#include <conio.h>

void main()
{
	FileAllFunctions file_all_functions;
	
	
	
	Accounting funk_accounting;
	string file_accounting = "accounting.bin";
	vector<Accounting> accounting;
	int count_accounting = 1;


	Managers funk_managers;
	string file_managers = "managers.bin";
	vector<Managers> managers;
	int count_managers = 0;

	ControlRooms funk_control_rooms;
	string file_control_rooms = "rooms.bin";
	vector<ControlRooms> rooms;
	int count_rooms = 0;


	Aircrafts funk_aircrafts;

	Teams funk_teams;
	string file_teams = "teams.bin";
	string file_busy_teams = "busy_teams.bin";
	vector<Teams> teams;
	vector<Teams> busy_teams;
	int count_teams = 0;
	int count_busy_teams = 0;
	

	Parking funk_parking;
	string file_parking = "parking.bin";
	vector<Parking> parking;
	int count_parking = 1;

	Shops funk_shops;
	vector<Parking> shops;
	int count_shops = 10;

	Customs funk_customs;

	RecreationHall funk_recreation_hall;


	do
	{
		cout << "1  - watch Accounting" << endl;
		cout << "2  - watch Parking" << endl;
		cout << "3  - watch Shops" << endl;
		cout << "4  - watch Customs" << endl;
		cout << "5  - watch Recreation Hall" << endl;

		cout << "6  - watch Managers" << endl;

		cout << "7 - go to Managers" << endl;
		cout << "8 - The day will end" << endl;

		int select;
		cout << "(Owner) input number: ";
		while (!(std::cin >> select) || select < 1 || select > 8)
		{
			cout << "(Owner) input number: ";
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}
		if (select == 1)
		{
			funk_accounting.print_accounting();
		}
		if (select == 2)
		{
			do
			{
				cout << "1  - input number seats" << endl;
				cout << "2  - print Parking" << endl;
				cout << "3  - end" << endl;
				int select;
				cout << "(Owner) input number: ";
				while (!(std::cin >> select) || select < 1 || select > 3)
				{
					cout << "(Owner) input number: ";
					cin.clear();
					while (cin.get() != '\n')
						continue;
				}
				if (select == 1)
				{
					funk_parking.input_spaces();
					file_all_functions.save_element(funk_parking.spaces, file_parking);
				}
				if (select == 2)
				{
					funk_parking.print_spaces();
				}
				if (select == 3)
				{
					break;
				}
				_getch();
			} while (true);
		}
		if (select == 3)
		{
			for (int i = 0; i < 10; i++)
			{
				shops[i].print_shop(i);
			}
		}
		if (select == 4)
		{
			funk_customs.print_customs();
		}
		if (select == 5)
		{
			funk_recreation_hall.print_recreation_hall();
		}
		if (select == 6)
		{
			do
			{
				cout << "1 - input Managers" << endl;
				cout << "2 - print Managers" << endl;
				cout << "3 - search Managers" << endl;
				cout << "4 - redaction Managers" << endl;
				cout << "5 - remove Managers" << endl;
				cout << "6 - end" << endl;

				int select;
				cout << "(Owner) input number: ";
				while (!(std::cin >> select) || select < 1 || select > 6)
				{
					cout << "(Owner) input number: ";
					cin.clear();
					while (cin.get() != '\n')
						continue;
				}
				if (select == 1)
				{
					int new_count;
					cout << "(Owner) input count: ";
					while (!(cin >> new_count))
					{
						cout << "(Owner) input count: ";
						cin.clear();
						while (cin.get() != '\n')
							continue;
					}
					managers.resize(count_managers + new_count);
					for (int i = 0; i < count_managers + new_count; i++)
					{
						managers[i].input_managers(i);
					}
					count_managers = managers.size();
					file_all_functions.save_elements(managers, count_managers, file_managers);
				}
				if (select == 2)
				{
					for (int i = 0; i < managers.size(); i++)
					{
						managers[i].print_managers(i);
					}
				}
				if (select == 3)
				{
					funk_managers.search_managers(managers);
				}
				if (select == 4)
				{
					int index;
					cout << "(Owner) Input index manager: ";
					while (!(cin >> index) || index < count_managers-1 || index > count_managers-1)
					{
						cout << "(Owner) Input index manager: ";
						cin.clear();
						while (cin.get() != '\n')
							continue;
					}
					funk_managers.redaction_managers(managers,index);
					file_all_functions.save_elements(managers, count_managers, file_managers);
				}
				if (select == 5)
				{
					int index;
					cout << "(Owner) Input index manager: ";
					while (!(cin >> index) || index < count_managers - 1 || index > count_managers - 1)
					{
						cout << "(Owner) Input index manager: ";
						cin.clear();
						while (cin.get() != '\n')
							continue;
					}
					funk_managers.remove_managers(managers, index);
					count_managers--;
					file_all_functions.save_elements(managers, count_managers, file_managers);
				}
				if (select == 6)
				{
					break;
				}
				_getch();
			} while (true);
		}
		if (select == 7)
		{
			if (count_managers < 1)
			{
				cout << "You have no managers" << endl;
				getchar();
			}
			else
			{
				do
				{
					cout << "1 - watch Accounting" << endl;
					cout << "2 - watch Managers" << endl;
					cout << "3 - watch Teams" << endl;
					cout << "4 - watch Control rooms" << endl;

					cout << "5 - go to Control rooms" << endl;

					cout << "6 - go to Owner" << endl;

					int select;
					cout << "(Manager) input number: ";
					while (!(std::cin >> select) || select < 1 || select > 6)
					{
						cout << "(Manager) input number: ";
						cin.clear();
						while (cin.get() != '\n')
							continue;
					}
					if (select == 1)
					{
						funk_accounting.print_accounting();
					}
					if (select == 2)
					{
						for (int i = 0; i < managers.size(); i++)
						{
							managers[i].print_managers(i);
						}
					}
					if (select == 3)
					{
						do
						{
							cout << "1 - input Teams" << endl;
							cout << "2 - print Teams" << endl;
							cout << "3 - remove Teams" << endl;
							cout << "4 - end" << endl;

							int select;
							cout << "(Manager) input number: ";
							while (!(std::cin >> select) || select < 1 || select > 4)
							{
								cout << "(Manager) input number: ";
								cin.clear();
								while (cin.get() != '\n')
									continue;
							}
							if (select == 1)
							{
								int new_count;
								cout << "(Manager) input count: ";
								while (!(std::cin >> new_count))
								{
									cout << "(Manager) input count: ";
									cin.clear();
									while (cin.get() != '\n')
										continue;
								}
								teams.resize(count_teams + new_count);
								for (int i = 0; i < count_teams + new_count; i++)
								{
									teams[i].input_teams(i);
								}
								count_teams = teams.size();
								file_all_functions.save_elements(teams, count_teams, file_teams);
							}
							if (select == 2)
							{
								for (int i = 0; i < teams.size(); i++)
								{
									teams[i].print_teams(i);
								}
							}
							if (select == 3)
							{
								int index;
								cout << "(Manager) input index: ";
								while (!(std::cin >> index))
								{
									cout << "(Manager) input index: ";
									cin.clear();
									while (cin.get() != '\n')
										continue;
								}
								funk_teams.remove_teams(teams, index);
								count_teams--;
								file_all_functions.save_elements(teams, count_teams, file_teams);
							}
							if (select == 4)
							{
								break;
							}
							_getch();
						} while (true);
					}
					if (select == 4)
					{
						do
						{
							cout << "1 - input Control rooms" << endl;
							cout << "2 - print Control rooms" << endl;
							cout << "3 - remove Control rooms" << endl;
							cout << "4 - end" << endl;

							int select;
							cout << "(Manager) input number: ";
							while (!(std::cin >> select) || select < 1 || select > 4)
							{
								cout << "(Manager) input number: ";
								cin.clear();
								while (cin.get() != '\n')
									continue;
							}
							if (select == 1)
							{
								int new_count;
								cout << "(Manager) input count: ";
								while (!(std::cin >> new_count))
								{
									cout << "(Manager) input count: ";
									cin.clear();
									while (cin.get() != '\n')
										continue;
								}
								rooms.resize(count_rooms + new_count);
								for (int i = 0; i < count_rooms + new_count; i++)
								{
									rooms[i].input_rooms(i);
								}
								count_rooms = rooms.size();
								file_all_functions.save_elements(rooms, count_rooms, file_control_rooms);
							}
							if (select == 2)
							{
								for (int i = 0; i < rooms.size(); i++)
								{
									rooms[i].print_rooms(i);
								}
							}
							if (select == 3)
							{
								int index;
								cout << "(Manager) input index: ";
								while (!(std::cin >> index))
								{
									cout << "(Manager) input index: ";
									cin.clear();
									while (cin.get() != '\n')
										continue;
								}
								funk_control_rooms.remove_rooms(rooms, index);
								count_rooms--;
								file_all_functions.save_elements(rooms, count_rooms, file_control_rooms);
							}
							if (select == 4)
							{
								break;
							}
							_getch();
						} while (true);
					}
					if (select == 5)
					{
						if (count_rooms < 1)
						{
							cout << "You have no managers" << endl;
							getchar();
						}
						else
						{
							do
							{
								cout << "1 - watch Control rooms" << endl;
								cout << "2 - watch Teams" << endl;
								cout << "3 - watch Aircrafts" << endl;
								cout << "4 - watch busy Teams" << endl;

								cout << "5 - manage flights" << endl;

								cout << "6 - go to Managers" << endl;

								int select;
								cout << "(Control rooms) input number: ";
								while (!(std::cin >> select) || select < 1 || select > 5)
								{
									cout << "(Control rooms) input number: ";
									cin.clear();
									while (cin.get() != '\n')
										continue;
								}
								if (select == 1)
								{
									for (int i = 0; i < rooms.size(); i++)
									{
										rooms[i].print_rooms(i);
									}
								}
								if (select == 2)
								{
									for (int i = 0; i < teams.size(); i++)
									{
										teams[i].print_teams(i);
									}
								}
								if (select == 3)
								{
									funk_aircrafts.print_aircrafts();
								}
								if (select == 4)
								{
									for (int i = 0; i < busy_teams.size(); i++)
									{
										busy_teams[i].print_teams(i);
									}
								}
								if (select == 5)
								{
									cout << "You need to send teams to the planes" << endl;
									if (count_teams >= funk_aircrafts.number_aircrafts)
									{
										cout << "You want to send " << funk_aircrafts.number_aircrafts << " teams on " << funk_aircrafts.number_aircrafts << " planes " << endl;
										cout << "1 - Yes : 2 - No" << endl;

										int select;
										cout << "(Control rooms) input number: ";
										while (!(std::cin >> select) || select < 1 || select > 2)
										{
											cout << "(Control rooms) input number: ";
											cin.clear();
											while (cin.get() != '\n')
												continue;
										}
										if (select == 1)
										{
											for (int i = 0; i < funk_aircrafts.number_aircrafts; i++)
											{
												funk_teams.remove_teams(teams,i);
											}count_teams = teams.size();
											file_all_functions.save_elements(teams, count_teams, file_teams);

											
											busy_teams.resize(funk_aircrafts.number_aircrafts);
											for (int i = 0; i < funk_aircrafts.number_aircrafts; i++)
											{
												busy_teams[i].input_busy_teams(i);
											}count_busy_teams = busy_teams.size();
											file_all_functions.save_elements(busy_teams, count_busy_teams, file_busy_teams);


											funk_aircrafts.remove_aircrafts();
										}
										if (select == 2)
										{
											continue;
										}
									}
									else
									{
										cout << "Hire more teams" << endl;
									}
								}
								if (select == 6)
								{
									break;
								}
								_getch();
							} while (true);
						}
					}
					if (select == 6)
					{
						break;
					}
					_getch();
				} while (true);
			}
		}
		if (select == 8)
		{
			break;
		}
		_getch();
	} while (true);
	
	

	
	
	
	
	
	

	
}





