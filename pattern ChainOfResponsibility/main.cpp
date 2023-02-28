#include "ATM.h"
#include "one_hundred.h"
#include "one_thousand.h"
#include "five_thousand.h"

int main()
{
	Money* five_thous = new Five_thousand();
	Money* one_thous = new One_thousand();
	Money* one_hundr = new One_hundred();
	five_thous->SetSuccessor(one_thous);
	one_thous->SetSuccessor(one_hundr);
	int cash;	
	do
	{
		cout << "ATM have bills 5000, 1000, 100 and max cash in ATM 10 000 000 rub" << endl;
		cout << "Enter your sum " << endl;
		cin >> cash;
		system("cls");
		Cash start(cash);
		five_thous->Process(start);
	} while (cash % 100 || cash > 10000000);
	
	delete five_thous;
	delete one_thous;
	delete one_hundr;

	return 0;
}