#pragma once
#include "ATM.h"

class One_thousand : public Money
{
public:

	void Process(Cash& request)
	{
		if (request.Getquantity() < 1000)
			pMoney->Process(request);
		else 
		{
			int bills = request.Getquantity() / 1000;
			request = request.Getquantity() - (bills * 1000);
			cout << "\nYour have " << bills << " one thousand bills";
			if (request.Getquantity() > 0)
				pMoney->Process(request);
			else
				exit;
		}
							
	}
};

