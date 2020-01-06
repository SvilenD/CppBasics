#include <iostream>

using namespace std;

int main(){
    const double cakePrice = 45;
    const double wafflePrice = 5.8;
    const double pancakePrice = 3.2;
    const int expendituresPart = 8;

    int campaignDays, cooksCount, cakesPerDay, wafflesPerDay, pancakesPerDay;

    cin >> campaignDays >> cooksCount >> cakesPerDay >> wafflesPerDay >> pancakesPerDay;

    //per day
    double income = cooksCount * (cakePrice * cakesPerDay + wafflePrice * wafflesPerDay + pancakePrice * pancakesPerDay);

    //total
    income *= campaignDays;

    double profit = income - (income / expendituresPart);

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << profit << endl;
    return 0;
}
