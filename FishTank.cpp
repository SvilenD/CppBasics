#include <iostream>

using namespace std;

int main(){
    int length;
    int width;
    int height;
    double percent;

    cin >> length >> width >> height >> percent;

    double liters = length * width * height / 1000.0;
    liters = (1 - percent / 100) * liters;

    cout.setf(ios::fixed);
    cout.precision(3);
    cout << liters << endl;
    return 0;
}
