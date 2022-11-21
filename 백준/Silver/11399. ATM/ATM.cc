#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int number,result = 0;
    cin >> number;
    auto list = new int[number];
    auto dp = new int[number];
    for(int i = 0; i < number; i++){
        cin >> list[i];
        dp[i] = 0;
    }
    sort(list, list+number);
    for(int i =0; i< number; i++){
        for(int j = 0; j <= i ;j++){
            dp[i] += list[j];
        }
        result += dp[i];
    }
    cout << result << endl;
}