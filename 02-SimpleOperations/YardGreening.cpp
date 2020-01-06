#include <iostream>

using namespace std;

int main(){
    const double pricePerSquareMeter = 7.61;
    const int discountPercent = 18;
    double price;
    double discount;
    double squareMeters;

    cin >> squareMeters;

    price = pricePerSquareMeter * squareMeters;
    discount = price * discountPercent / 100;
    price = price - discount;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The final price is: " << price << " lv." << endl;
    cout << "The discount is: " << discount <<" lv." << endl;

    return 0;
}
