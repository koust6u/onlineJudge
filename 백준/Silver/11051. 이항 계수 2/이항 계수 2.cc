#include <iostream>
using namespace std;
unsigned long long int DP[1002][1002];
int main(){
    int N, K;
    cin >> N >> K;

    DP[1][1] = 1;
    for(int i = 2 ; i <= N+1 ; i++){
        for(int j = 1; j <= i; j++){
            DP[i][j] = (DP[i-1][j-1] + DP[i-1][j])% 10007;
        }
    }
    cout << DP[N+1][K+1];
}