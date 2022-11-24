#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> plus_q;
    priority_queue<int, vector<int>, greater<int>>minus_q;
    bool flag = false;
    int number, result = 0;
    cin >> number;
    for (int i = 0; i < number; i++) {
        int temp;
        cin >> temp;
        if(temp > 1){
            plus_q.push(temp);
        }
        else if(temp == 1){
            result += 1;
        }
        else if(temp == 0){
            flag = true;
        }
        else{
            minus_q.push(temp);
        }
    }
    while(!plus_q.empty()){
        int x = plus_q.top();
        plus_q.pop();
        if(plus_q.empty()){
            result += x;
        }
        else{
            int y = plus_q.top();
            plus_q.pop();
            result += x*y;
        }
    }
    while(!minus_q.empty()){
        int x = minus_q.top();
        minus_q.pop();
        if(minus_q.empty()){
            if(!flag){
                result += x;
            }
        }
        else{
            int y = minus_q.top();
            minus_q.pop();
            result += x*y;
        }
    }
    cout << result;
}