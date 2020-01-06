#include <iostream>

using namespace std;

int main()
{
	const double delayEach15Meters = 12.5;
	double currentWorldRecord, distanceMeters, secondsFor1Meter;

	cin >> currentWorldRecord >> distanceMeters >> secondsFor1Meter;

	double time = (distanceMeters * secondsFor1Meter);

	time += (distanceMeters / 15) * delayEach15Meters;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (time > currentWorldRecord){
		cout << "No, he failed! He was " << time - currentWorldRecord << " seconds slower." << endl;
	}
	else {
		cout << "Yes, he succeeded! The new world record is "<< currentWorldRecord - time << " seconds." << endl;
	}

	return 0;
}