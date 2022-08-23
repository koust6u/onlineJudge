#include <iostream>
using namespace std;
int DP[1001];
int P[1001];

int main(){
    int count;
    cin >> count;
    P[0] = 0;
    for(int i = 1; i <= count; i++){
        cin >> P[i];
    }
    for(int i = 1; i <= count; i++){
        int Max = 0;
        for(int j = 1; j <=i ; j++){
            if(Max < DP[i-j] + P[j])
                Max = DP[i-j] + P[j];
        }
        DP[i] = Max;
    }

    cout << DP[count];
}