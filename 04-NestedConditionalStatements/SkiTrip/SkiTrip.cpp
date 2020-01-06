#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int singleRoomPrice = 18;
	const int apartmentPrice = 25;
	const int presidentApPrice = 35;

	string daysAsText, typeOfRoom, rating;

	getline(cin, daysAsText);
	getline(cin, typeOfRoom);
	getline(cin, rating);

	int nights = stoi(daysAsText) - 1;
	double price = nights;

	if (typeOfRoom == "room for one person")
	{
		price *= singleRoomPrice;
	}
	else
	{
		if (nights < 10)
		{
			if (typeOfRoom == "apartment")
			{
				price *= apartmentPrice * 0.7;
			}
			else
			{
				price *= presidentApPrice * 0.9;
			}
		}

		else if (nights <= 15)
		{
			if (typeOfRoom == "apartment")
			{
				price *= apartmentPrice * 0.65;
			}
			else
			{
				price *= presidentApPrice * 0.85;
			}
		}
		else
		{
			if (typeOfRoom == "apartment")
			{
				price *= apartmentPrice * 0.5;
			}
			else
			{
				price *= presidentApPrice * 0.8;
			}
		}
	}

	if (rating == "positive")
	{
		price *= 1.25;
	}
	else
	{
		price *= 0.9;
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << price << endl;

	return 0;
}