#include <iostream>
using namespace std;
int list[1001];
int dp[1001];

int main(){
    int n,max = 0;
    cin >> n;
    for(int i =1; i <= n ; i++){
        cin >> list[i];
    }
    for(int i = 1; i<= n; i++){
        dp[i] = 1;
        for(int j =1; j < i; j++){
            if(list[i] < list[j] and dp[i] < dp[j]+ 1){
                dp[i] = dp[j] +1;
            }
        }
        if(max < dp[i]){
            max = dp[i];
        }
    }
    cout << max;
}