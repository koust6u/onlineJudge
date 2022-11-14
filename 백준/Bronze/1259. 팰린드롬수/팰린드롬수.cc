#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool oddNumber(string s){
    int number = s.length()/2;

    for(int i = 0; i < number; i++){
        if(s[i] != s[s.length()-1-i])
            return false;
    }
    return true;
}

int main(){
    string s;
    vector<bool> v;
    cin >> s;
    while(s.compare("0") != 0){
        v.emplace_back(oddNumber(s));
        cin >> s;
    }

    for(auto i: v){
        if(i)
            cout << "yes"<< endl;
        else
            cout << "no" << endl;
    }
}