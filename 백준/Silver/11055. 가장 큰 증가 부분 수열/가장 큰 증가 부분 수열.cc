#include <iostream>
using namespace std;
int list[1001];
int DP[1001];
int main(){
    int number;
    cin >> number;
    for(int i = 1; i <= number; i++) cin >> list[i];
    int max = 0;
    for(int i = 1; i <= number; i++){
        DP[i] = list[i];
        for(int j= 1; j < i; j++){
            if(list[j] < list[i] && DP[i] < DP[j] + list[i])
                DP[i] = DP[j] + list[i];
        }
        if(max < DP[i])
            max = DP[i];
    }
    cout << max;
}
