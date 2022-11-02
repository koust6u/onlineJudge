#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long int island[123457];
vector<int> tree[123457];

void input(){
    int count,number, path;
    char temp;
    cin >> count;
    for(int i =2; i <= count; i++){
        cin >> temp >> number >> path;
        tree[path].push_back(i);

        if(temp == 'W')island[i] = -number;
        else island[i] = number;
    }
}

long long int dfs(int now){
    if(tree[now].empty()){
        if(island[now] > 0) return island[now];
        else return 0;
    }

    long long int sum = island[now];

    for(int next : tree[now]){
        sum += dfs(next);
    }
    if(sum < 0) return 0;
    return sum;
}

void solve(){
    long long int result = dfs(1);
    cout << result << endl;
}
int main(){
    input();
    solve();
}