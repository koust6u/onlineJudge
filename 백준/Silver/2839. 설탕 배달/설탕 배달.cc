#include <iostream>
using namespace std;

int main(){
    int weight;
    cin >> weight;
    int count = 0;
    while(weight %5 != 0){
        weight -= 3;
        count++;
        if(weight < 3 && weight != 0){
            count = -1;
            break;
        }
    }
    count += weight/5;
    cout << count;

}