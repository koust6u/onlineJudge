#include <stack>
#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    stack<pair<int,int>> s;
    int count;
    cin >> count;
    for(int i = 1; i <= count; i++){
        int height;
        cin >> height;
        while(!s.empty()){
            if(s.top().second > height){
                cout << s.top().first << " ";
                break;
            }
            s.pop();
        }
        if(s.empty()) cout << "0 ";
        s.push(make_pair(i,height));
    }
}