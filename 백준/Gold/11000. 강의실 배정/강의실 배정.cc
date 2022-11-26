#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    int number;
    cin >> number;
    vector<pair<int,int>> v;
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i = 0; i < number ; i++){
        int s, t;
        cin >> s >> t;
        v.emplace_back(s,t);
    }
    sort(v.begin(), v.end());

    pq.push(v[0].second);

    for(int i = 1 ; i< number ;i++){
        if(v[i].first >= pq.top()){
            pq.pop();
            pq.push(v[i].second);
        }
        else{
            pq.push(v[i].second);
        }
    }
    cout << pq.size();
}