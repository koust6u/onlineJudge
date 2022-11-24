#include <iostream>
#include <queue>
using namespace std;

int main(){
    int number, result = 0;
    cin >> number;
    priority_queue<int ,vector<int>, greater<int>> pq;
    for(int i =0; i < number; i++){
        int temp;
        cin >> temp;
        pq.push(temp);
    }
    while(pq.size() > 1){
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        int temp = x+y;
        pq.push(temp);
        result += temp;
    }
    cout << result;
}