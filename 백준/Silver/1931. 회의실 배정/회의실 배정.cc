#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int number;
    cin >> number;
    vector<pair<int,int>> v;
    for(int i =0; i < number; i++){
        int start, end;
        cin >> start >> end;
        v.emplace_back(make_pair(end, start));
    }
    sort(v.begin(), v.end());
    int time = v[0].first;
    int count = 1;
    for(int i = 1; i < number; i++){
        if(time <= v[i].second){
            count++;
            time = v[i].first;
        }
    }
    cout << count;
}