#include <iostream>
using namespace std;
int DP[1000001];

int main(){
    int count;
    cin >> count;
    DP[0] = 0;
    DP[1] = 1;
    DP[2] = 2;
    for(int i = 3; i <= count; i++){
        DP[i] = (DP[i-1]+ DP[i-2])%15746;
    }
    
    cout << DP[count];
}