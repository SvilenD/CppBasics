#include <iostream>

using namespace std;

int main(){
    int first, second, third;

    cin >> first >> second >> third;

    int sum = first + second + third;

    int seconds = sum % 60;
    int minutes = sum / 60;
    string result;
    if (seconds < 10){
        result = to_string(minutes) + ":0" + to_string(seconds);
    }
    else{
        result = result = to_string(minutes) + ":" + to_string(seconds);
    }
    cout << result << endl;
    return 0;
}
