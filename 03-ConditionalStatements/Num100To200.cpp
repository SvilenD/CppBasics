#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;

    string result = "";
    if(num < 100){
        result = "Less than 100";
    }
    else if(num > 200){
        result = "Greater than 200";
    }
    else{
        result = "Between 100 and 200";
    }

    cout << result << endl;
    return 0;
}
