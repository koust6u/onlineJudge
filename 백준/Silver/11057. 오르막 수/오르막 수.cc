#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    int **DP = new int*[number+1];
    for(int i= 0; i <= number; i++){
        DP[i] = new int[10];
    }
    for(int i = 0; i <= 9; i++){
        DP[0][i] = 0;
        DP[1][i] = i+1;
    }
    DP[0][0] = 0;
    for(int i = 1; i<= number; i++){
        DP[i][0] = 1;
    }
    for(int i = 2; i <= number; i++){
        for(int j= 1; j <= 9; j++){
            DP[i][j] = (DP[i][j-1] + DP[i-1][j])%10007;
        }
    }
    cout << DP[number][9]%10007;
}