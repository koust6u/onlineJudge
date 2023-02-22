#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    stack<char> p;
    for(auto& i: s){
        if(i == '(')
            p.push('(');
        else{
            if(p.empty())
                return false;
            p.pop();
        }
    }
    if(!p.empty()) return false;
    return true;
}