#include <iostream>

using namespace std;

int main(){
    string name;
    cin >> name;

    int projectsCount;
    cin >> projectsCount;

    int hours = projectsCount * 3;

    cout << "The architect " + name + " will need " << hours << " hours to complete " << projectsCount << " project/s." << endl;

    return 0;
}
