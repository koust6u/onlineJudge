#include <iostream>
#include <queue>
using namespace std;

int main(){
    int length, index;
    cin >> length >> index;

    queue<int> q;
    vector<int> answers;

    for(int i = 1 ; i <= length; i++){
        q.push(i);
    }

    while(!q.empty()){
        for(int i = 0 ; i < index-1; i++){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }

        answers.push_back(q.front());
        q.pop();
    }

    cout << "<";
    for(int i = 0; i < answers.size(); i++){
        if(i == answers.size()-1){
            cout << answers[i] << ">";
        }
        else{
            cout << answers[i] << ", ";
        }
    }
}