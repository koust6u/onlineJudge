#include <iostream>
using namespace std;

int main(){
    int hour, minute, add;
    cin >> hour >> minute >> add;

    minute += add;
    while(minute >= 60){
        minute -=60;
        if(hour < 23){
            hour++;
        }
        else{
            hour = 0;
        }
    }
    cout << hour << " " << minute;

}