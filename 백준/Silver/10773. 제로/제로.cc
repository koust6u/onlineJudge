#include <stack>
#include <iostream>
using namespace std;

int main(){
    int count;
    cin >> count;
    stack<int> s;
    for(int i = 0; i < count; i++){
        int temp;
        cin >> temp;
        if(temp != 0){
            s.push(temp);
        }
        else{
            s.pop();
        }
    }
    int result = 0;
    int size = s.size();
    for(int i = 0; i < size; i++){
        result += s.top();
        s.pop();
    }
    cout << result;
}