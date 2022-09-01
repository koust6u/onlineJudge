#include <iostream>
using namespace std;

int main(){
    int number, value;
    cin >> number >> value;
    int* DP = new int[value+1];
    int* list = new int[number];
    for(int i = 0; i <= value; i++){
        DP[i] = 0;
    }
    for(int i = 0 ; i < number; i++){
       cin >> list[i];
    }
    DP[0] = 1;

    for(int i = 0; i < number; i++){
        for(int j = list[i]; j <= value; j++){
            DP[j] += DP[j-list[i]];
        }
    }
    cout << DP[value];
}