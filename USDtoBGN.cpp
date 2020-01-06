#include <iostream>

using namespace std;

int main(){
    const double exchangeRate = 1.79549;
    double money;
    cin >> money;

    money = money * exchangeRate;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << money << endl;

    return 0;
}
