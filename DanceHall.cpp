#include <iostream>
#include <cmath>

using namespace std;

int main(){
    const double dancerSpaceCM = 7040;
    double hallLength, hallWidth, wardrobeSide;
    cin >> hallLength >> hallWidth >> wardrobeSide;

    ///converting meters to cm;
    hallLength *= 100;
    hallWidth *= 100;
    wardrobeSide *= 100;

    double hallArea = hallLength * hallWidth;
    hallArea *= 0.9; ///exclude bench area
    hallArea -= wardrobeSide * wardrobeSide; ///exclude wardrobe area
    int dancersCount = floor(hallArea / dancerSpaceCM);

    cout << dancersCount << endl;

    return 0;
}
