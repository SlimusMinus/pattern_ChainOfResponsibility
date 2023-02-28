#pragma once
#include "ATM.h"

class Five_thousand : public Money
{
public:

	void Process(Cash& request)
	{
		if (request.Getquantity() < 10000000)
		{
			if (!(request.Getquantity() % 100))
			{
				if (request.Getquantity() < 5000)
					pMoney->Process(request);
				else
				{
					int bills = request.Getquantity() / 5000;
					request = request.Getquantity() - (bills * 5000);
					cout << "\nYour have " << bills << " five thousand bills";
					if (request.Getquantity() > 0)
						pMoney->Process(request);
					else
						exit;
				}

			}
			else
			{
				cout << "\nATM hane not this bills, press Enter and try again\n\n";
				system("pause");
				system("cls");
			}

		}
		
		else
		{
			cout << "\nThe requested amount could not be issued, press Enter and try again\n\n";
			system("pause");
			system("cls");
		}
			
	}
};

