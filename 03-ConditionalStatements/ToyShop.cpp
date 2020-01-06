#include <iostream>

using namespace std;

int main(){
    const double puzzlePrice = 2.6;
    const double dollPrice = 3;
    const double bearPrice = 4.1;
    const double minionPrice = 8.2;
    const double truckPrice = 2;

    double excursionPrice;
    int puzzlesCount, dollsCount, bearsCount, minionsCount, trucksCount;

    cin >> excursionPrice >> puzzlesCount >> dollsCount >> bearsCount >> minionsCount >> trucksCount;

    int totalToys = puzzlesCount + dollsCount + bearsCount + minionsCount + trucksCount;
    double income = puzzlePrice * puzzlesCount + dollPrice * dollsCount + bearPrice * bearsCount
        + minionPrice * minionsCount + truckPrice * trucksCount;

    ///discount
    if (totalToys >= 50){
        income *= 0.75;
    }
    ///rent
    income *= 0.9;
    double balance = income - excursionPrice;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (balance >= 0){
        cout << "Yes! " << balance << " lv left." << endl;
    }
    else{
        balance *= -1;
        cout << "Not enough money! " << balance << " lv needed." << endl;
    }
    return 0;
}
