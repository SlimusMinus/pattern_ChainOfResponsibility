#pragma once
#include "ATM.h"

class One_hundred :public Money
{
public:

	void Process(Cash& request)
	{
		int bills = request.Getquantity() / 100;
		request = request.Getquantity() - (bills * 1000);
		cout << "\nYour have " << bills << " one hundred rub bills";

	}
};

