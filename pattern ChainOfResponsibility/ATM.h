#pragma once
#include "Cash.h"
#include <iostream>
using namespace std;

class Money
{
protected:
	Money* pMoney;
public:
	void SetSuccessor(Money* ptrMoney)
	{
		pMoney = ptrMoney;
	}
	virtual void Process(Cash& request) = 0;
	virtual ~Money(){}
};
