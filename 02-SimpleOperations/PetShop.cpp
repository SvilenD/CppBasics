#include <iostream>

using namespace std;

int main(){
    const double dogFoodPrice = 2.5;
    const double otherAnimalsFoodPrice = 4;
    int dogsCount;
    int otherAnimalsCount;
    cin >> dogsCount >> otherAnimalsCount;

    double bill = dogsCount * dogFoodPrice + otherAnimalsCount * otherAnimalsFoodPrice;

    cout.precision(2);
    cout << fixed << bill << " lv."<< endl;
    return 0;
}
