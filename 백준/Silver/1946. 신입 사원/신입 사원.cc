#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int>x ,pair<int,int> y){
    return x.first < y.first;
}

int main(){
    int T;
    cin >> T;
    for(int i = 0 ; i <T ;i++){
        int N;
        cin >> N;
        vector<pair<int,int>> v;
        for(int j = 0 ; j< N; j++){
            int x, y;
            cin >> x >> y;
            v.emplace_back(x,y);
        }
        sort(v.begin(), v.end(), compare);

        if(v.empty()){
            cout << 0 << endl;
            break;
        }
        int result = 1;
        int temp = 0;
        for(int j = 0 ; j < N; j++){
            if(v[temp].second > v[j].second) {
                result++;
                temp = j;
            }
        }
        cout << result << endl;
    }
}