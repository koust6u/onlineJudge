#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;



int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    map<string, int> check;
    vector<string> v;
    for(int i = 0 ; i < n+m; i++){
        string s;
        cin >> s;
        check[s]++;
        if(check[s] > 1)
            v.push_back(s);
    }
    sort(v.begin(), v.end());
    cout << v.size() << endl;
    for(auto &i: v)
        cout << i << endl;
}
