#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    stack<int> s;
    for(auto&i: arr){
        if(s.empty()){
            s.push(i);
            continue;
        }
        if(s.top() != i){
            answer.push_back(s.top());
            s.pop();
            s.push(i);
        }

    }
    if(!s.empty()){
        answer.push_back(s.top());
    }
    return answer;
}
