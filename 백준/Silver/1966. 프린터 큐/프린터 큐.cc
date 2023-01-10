#include <iostream>
#include <queue>
#define pair pair<int, bool>
using namespace std;

void input(queue<pair>& q){
    int size, index;
    cin >> size >> index;
    for(int i = 0 ; i < size; i++){
        int priority;
        cin >> priority;
        if(i == index)
            q.emplace(priority,true);
        else
            q.emplace(priority,false);
    }
}

int findMax(queue<pair> &q){
    int result = 0;
    for(int i = 0 ; i < q.size(); i++){
        if(result < q.front().first) result = q.front().first;
        q.push(q.front());
        q.pop();
    }
    return result;
}

void process(queue<pair> &q, vector<int>& v){
    int priority = 1;
    while(!q.empty()){
        int maxVal = findMax(q);
        if(q.front().first == maxVal){
            if(q.front().second){
                v.push_back(priority);
                return;
            }
            else{
                priority++;
                q.pop();
            }
        }
        else{
            pair temp = q.front();
            q.pop();
            q.push(temp);
        }
    }
}

void solve(){
    int cases;
    cin >> cases;
    vector<int> answers;
    for(int i = 0 ; i < cases; i++){
        queue<pair> q;
        input(q);
        process(q,answers);
    }
    for(auto& i: answers)
        cout << i << endl;
}
int main(){
    solve();
}