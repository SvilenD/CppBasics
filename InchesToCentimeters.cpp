#include <iostream>

using namespace std;

int main(){
    double inches;
    cin >> inches;

    double centimeters = inches * 2.54;
    //cout.setf(ios::fixed);
    //cout.precision(2);
    cout << centimeters << endl;

    return 0;
}
