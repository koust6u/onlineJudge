#include <iostream>
#include <vector>
using namespace std;
#define pair pair<int,int>
bool visit[1002] = {false};
void dfs(vector<int> *v, int location){
    visit[location] = true;
    for(int i =0; i < v[location].size(); i++){
        int next = v[location][i];
        if(!visit[next])
            dfs(v,next);
    }
}
int main(){
    visit[0] =true;
    int vertex, edge;
    cin >> vertex >> edge;
    vector<int> tree[1002];
    for(int i = 0; i < edge; i++){
        int start, dest;
        cin >> start >> dest;
        tree[start].push_back(dest);
        tree[dest].push_back(start);
    }
    int answer = 0;
    for(int i = 1; i <= vertex; i++){
        if(!visit[i]){
            dfs(tree,i);
            answer++;
        }
    }
    cout << answer << endl;
}