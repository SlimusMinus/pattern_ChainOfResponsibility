#pragma once

using namespace std;
class Cash
{
	int quantity;

public:

	Cash(int f = 0) :quantity(f) {	}

	int Getquantity() const
	{
		return quantity;
	}
};

