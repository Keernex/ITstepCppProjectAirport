#include "parking.h"



void main()
{
	Parking parking;


	do
	{
		int q = 0;
		cout << "Enter number: ";
		cin >> q;
		if (q == 1)
		{
			int w;
			cout << "Enter parking: ";
			cin >> w;
			parking.input_parking_spaces(w);
		}
		if (q == 2)
		{
			parking.print_parking();
		}
		if (q == 3)
		{
			break;
		}

	} while (true);
}





