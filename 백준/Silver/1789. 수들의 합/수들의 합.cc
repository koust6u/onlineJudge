#include <iostream>
using namespace std;

int main(){
    long long number;
    cin >> number;

    long long sum = 0, idx = 1;

    while(true){
        sum += idx;
        idx++;
        if(sum > number) break;
    }
    cout << idx-2;
}