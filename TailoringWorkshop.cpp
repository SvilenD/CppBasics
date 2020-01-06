#include <iostream>

using namespace std;

int main(){
    const double rectCoversExtra = 0.3;
    const double rectCoverPricePerSquareMeter = 7;
    const double squareCoverPricePerSquareMeter = 9;
    const double dollarsExchangeRate = 1.85;
    int tablesCount;
    double lengthInMeters, widthInMeters;

    cin >> tablesCount >> lengthInMeters >> widthInMeters;

    double rectCoversArea = (lengthInMeters + 2 * rectCoversExtra) * (widthInMeters + 2 * rectCoversExtra);
    double squareCoversArea = (lengthInMeters / 2.0) * (lengthInMeters / 2.0);

    double dollarsPrice = tablesCount * (rectCoversArea * rectCoverPricePerSquareMeter + squareCoversArea * squareCoverPricePerSquareMeter);
    double levaPrice = dollarsPrice * dollarsExchangeRate;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << dollarsPrice<< " USD" << endl << levaPrice << " BGN" << endl;
    return 0;
}
