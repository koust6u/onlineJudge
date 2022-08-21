#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    int* list = new int[number];
    int *DP = new int[number];
    for(int i = 0; i < number; i++){
        int temp;
        cin >> temp;
        list[i] = temp;
    }

    DP[0] = list[0];
    DP[1] = list[0] + list[1];
    DP[2] = list[2] + max(list[0], list[1]);
    for(int i = 3; i <number; i++){
        DP[i] = max(DP[i-3] + list[i]+ list[i-1], DP[i-2]+list[i]);
    }
    cout << DP[number-1];
}