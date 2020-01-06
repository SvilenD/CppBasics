#include <iostream>
#define HOUR 3600
#define MIN 60

int main(){
    int time_target=4600;
    int hour=time_target/HOUR;
    int second=time_target % HOUR;
    int minute=second/MIN;
    second %= MIN;

    return 0;
}
