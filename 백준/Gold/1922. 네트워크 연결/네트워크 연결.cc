#include <iostream>
#include <algorithm>
#include <vector>
#define p pair<int, pair<int,int>>
using namespace std;
vector<p> v;
int number, edge;
int root[1001];
void input(){
    cin >> number;
    for(int i = 0; i < number; i++) root[i] = i;
    cin >> edge;
    for(int i = 0; i < edge; i++){
        int a, b,c;
        cin >> a>> b >> c;
        v.push_back({c,{a,b}});
    }
    sort(v.begin(),v.end());
}

int find_root(int x){
    if(x == root[x]) return x;
    return root[x] = find_root(root[x]);
}

void union_root(int x, int y){
    x = find_root(x);
    y = find_root(y);
    if(x != y) root[y] =x;
}

void kruskal(){
    int idx = 0;
    int answer = 0;
    for(int i = 0; i< v.size(); i++){
        p current = v[i];
        int start = current.second.first;
        int end = current.second.second;
        if(find_root(start) == find_root(end)) continue;
        idx++;
        union_root(start, end);
        answer += current.first;
        if(idx == number-1) break;
    }
    cout << answer;
}


int main(){
    input();
    kruskal();
}