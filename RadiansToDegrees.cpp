#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ///const double pi = M_PI;
    const double pi = 3.141592;
    double radians;
    double degrees;

    cin >> radians;

    degrees = radians * 180 / pi;

    cout << round(degrees) << endl;
}
