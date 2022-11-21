#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a > b;
}
int main(){
    int N, K,result = 0;
    cin >> N >> K;
    vector<int> v;
    for(int i = 0 ; i < N; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), compare);

    for(auto& i: v){
        while(K - i >= 0){
            result++;
            K -= i;
        }
    }
    cout << result << endl;
}