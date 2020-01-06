#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double radius;
    cin >> radius;
    const double pi = 3.141592;

	double area = 3.141592 * radius * radius;
	double perimeter = 2 * 3.141592 * radius;

    cout.setf(ios::fixed);
  	cout.precision(2);
  	cout << area << endl << perimeter << endl;
    return 0;
}
