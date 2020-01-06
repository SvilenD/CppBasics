#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x1;
    double y1;
    double x2;
    double y2;

    cin >> x1 >> y1 >> x2 >> y2;

    double x = abs(x1 - x2);
    double y = abs(y1 - y2);
    double area = x * y;
    double perimeter = 2 * (x + y);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << area << endl << perimeter << endl;
    return 0;
}
