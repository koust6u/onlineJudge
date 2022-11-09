#include <iostream>
#include <algorithm>
#include <vector>
#define pair pair<int,int>
using namespace std;
int answer[100001];
vector<int> tree[100001];
bool visit[100001];


void dfs(int idx){
    visit[idx] = true;
    for(int i = 0 ; i < tree[idx].size(); i++){
        int next = tree[idx][i];
        if(!visit[next]) {
            answer[next] = idx;
            dfs(next);
        }
    }
}

int main(){
    int count;
    cin >> count;
    for(int i = 0; i < count-1; i++){
        int x, y;
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    dfs(1);

    for(int i =2; i<= count; i++){
        printf("%d\n", answer[i]);
    }

}