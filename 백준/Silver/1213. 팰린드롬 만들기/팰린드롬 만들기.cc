#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    vector<char> v;
    for(char & i : s){
        v.push_back(i);
    }
    sort(v.begin(), v.end());
    vector<char> odd;
    for(size_t i = 0 ; i < v.size() ;i++){
        if(v[i] == v[i+1]) i++;
        else odd.push_back(v[i]);
    }
    if(odd.size() > 1){
        cout<< "I'm Sorry Hansoo" <<endl;
        return 0;
    }

    for(size_t i = 0; i <v.size(); i++){
        if(v[i] == v[i+1]){
            cout << v[i];
            i++;
        }
    }
    reverse(v.begin(), v.end());
    if(!odd.empty())cout << odd[0];
    for(size_t i = 0; i <v.size(); i++){
        if(v[i] == v[i+1]){
            cout << v[i];
            i++;
        }
    }
}