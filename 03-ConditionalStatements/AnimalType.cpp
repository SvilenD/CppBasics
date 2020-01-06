#include <iostream>

using namespace std;

int main(){
    string result = "";

    string animal;
    cin >> animal;

    if(animal == "dog"){
        result = "mammal";
    }
    else if (animal == "crocodile" || animal == "tortoise" || animal == "snake"){
            result = "reptile";
    }
    else{
        result = "unknown";
    }

    cout << result << endl;
    return 0;
}
