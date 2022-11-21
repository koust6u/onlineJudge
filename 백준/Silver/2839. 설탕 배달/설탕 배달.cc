#include <iostream>
using namespace std;

int main(){
    int N, result = 0;
    cin >> N;
    while(N >= 0){
        if(N % 5 == 0){
            result += N/5;
            cout << result << endl;
            return 0;
        }
        N -=3;
        result++;
    }
    cout << -1 << endl;
}