#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double movieBudget, clothesPrice, balance;
    int actorsCount;

    cin >> movieBudget >> actorsCount >> clothesPrice;

    double sceneryPrice = 0.1 * movieBudget;

    if (actorsCount > 150)
    {
        clothesPrice *= 0.9;
    }

    balance = movieBudget - (actorsCount * clothesPrice + sceneryPrice);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (balance >= 0){
        cout << "Action!" << endl << "Wingard starts filming with "
            << balance << " leva left." << endl;
    }
    else {
        cout << "Not enough money!" << endl << "Wingard needs " << abs(balance) << " leva more."<< endl;
    }

    return 0;
}