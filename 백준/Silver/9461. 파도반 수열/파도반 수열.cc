#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long int DP[101] = { 0,1,1,1,2,2,3,0,};
    int count;
    vector<long long int> v;
    cin >> count;
    for(int i = 6; i <= 100; i++){
        DP[i] = DP[i-1] + DP[i-5];
    }

    for(int i = 0; i < count; i++){
        long long int temp;
        cin >> temp;
        v.push_back(DP[temp]);
    }

    for(int i = 0; i < count; i++){
        cout << v[i] << endl;
    }
}