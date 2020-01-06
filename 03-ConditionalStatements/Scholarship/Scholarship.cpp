#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double income, averageGrade, minSalary;

	cin >> income >> averageGrade >> minSalary;

	bool hasSocial = income < minSalary && averageGrade > 4.5;
	bool hasExcellent = averageGrade >= 5.5;
	int socialScholarship = floor(minSalary * 0.35);
	int excellentScholarship = floor(averageGrade * 25);
	string output = "";
	
	if (hasSocial == false && hasExcellent == false)
	{
		output = "You cannot get a scholarship!";
	}
	else if (hasSocial && hasExcellent)
	{
		if (socialScholarship > excellentScholarship)
		{
			output = "You get a Social scholarship " + to_string(socialScholarship) + " BGN";
		}
		else
		{
			output = "You get a scholarship for excellent results " + to_string(excellentScholarship) + " BGN";
		}
	}
	else if (hasSocial)
	{
		output = "You get a Social scholarship " + to_string(socialScholarship) + " BGN";
	}
	else if (hasExcellent)
	{
		output = "You get a scholarship for excellent results " + to_string(excellentScholarship) + " BGN";
	}

	cout << output << endl;
}