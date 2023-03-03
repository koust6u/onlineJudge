#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool compare(char a, char b){
    return a > b;
}
int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end(),compare);
    if(s[s.size()-1] != '0'){
        cout << -1 << endl;
        return 0;
    }
    int sum = 0;
    for(int i = 0 ; i < s.length(); i++){
        sum += stoi(s.substr(i,1));
    }
    if(sum %3 == 0){
        cout << s << endl;
    }
    else cout << -1 << endl;
}