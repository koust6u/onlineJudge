#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    char temp = s[0];
    int result = 0;
    for(int i = 1 ; i < s.length(); i++){
        if(temp == s[i])continue;
        else{
            if(s[i] != s[0]) result++;
            temp = s[i];
        }
    }
    cout << result << endl;
}