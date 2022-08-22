#include <iostream>
using namespace std;

int main(){
    int DP[10001] = {0,1,3,};
    int number;
    cin >> number;
    for(int i = 3; i <= number; i++){
        DP[i] = (DP[i-1] + DP[i-2] *2)%10007;
    }
    cout << DP[number];

}