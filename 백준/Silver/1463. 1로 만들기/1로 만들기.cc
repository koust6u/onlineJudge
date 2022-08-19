#include <iostream>
using namespace std;


int main(){
    int num;
    cin >> num;
    int DP[10000000];
    for(int i = 2; i <= num; i++){
        DP[i] = DP[i-1] +1;
        if(i %2 == 0)
            DP[i] = min(DP[i], DP[i/2] +1);
        if( i%3 ==0)
            DP[i] = min(DP[i], DP[i/3] +1);
    }
    cout << DP[num];
}