#include <iostream>

using namespace std;

int main()
{
	string town;
	double salesAmount;

	cin >> town >> salesAmount;
	bool validTown = town == "Sofia" || town == "Plovdiv" || town == "Varna";
	double commision = 0;

	if (salesAmount < 0 || validTown == false)
	{
		cout << "error" << endl;
	}
	else if (salesAmount <= 500)
	{
		if (town == "Sofia")
		{
			commision = 0.05;
		}
		else if (town == "Varna")
		{
			commision = 0.045;
		}
		else if (town == "Plovdiv")
		{
			commision = 0.055;
		}
	}
	else if (salesAmount <= 1000)
	{
		if (town == "Sofia")
		{
			commision = 0.07;

		}
		else if (town == "Varna")
		{
			commision = 0.075;
		}
		else if (town == "Plovdiv")
		{
			commision = 0.08;
		}
	}
	else if (salesAmount <= 10000)
	{
		if (town == "Sofia")
		{
			commision = 0.08;
		}
		else if (town == "Varna")
		{
			commision = 0.10;
		}
		else if (town == "Plovdiv")
		{
			commision = 0.12;
		}
	}
	else
	{
		if (town == "Sofia")
		{
			commision = 0.12;
		}
		else if (town == "Varna")
		{
			commision = 0.13;
		}
		else if (town == "Plovdiv")
		{
			commision = 0.145;
		}
	}

	if (commision != 0)
	{
		cout.setf(ios::fixed);
		cout.precision(2);
		double amount = commision * salesAmount;
		cout << amount << endl;
	}

	return 0;
}