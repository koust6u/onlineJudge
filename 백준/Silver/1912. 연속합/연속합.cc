#include<iostream>
using namespace std;

int main(){
    int* list, *DP, number;
    cin >> number;
    list = new int[number];
    DP = new int[number];

    for(int i = 0; i < number; i++){
        cin >> list[i];
    }

    DP[0] = list[0];
    int result = DP[0];

    for(int i = 1 ; i < number; i++){
        DP[i] = max(DP[i-1] + list[i], list[i]);
        result = max(result, DP[i]);
    }
    cout << result << endl;
}