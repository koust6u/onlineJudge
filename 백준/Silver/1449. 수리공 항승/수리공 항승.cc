#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    int start = v[0];
    int count = 1;
    for(int i = 1 ; i < n; i++){
        if(v[i] - start + 1 <= l)
            continue;
        else{
            count++;
            start = v[i];
        }
    }
    cout << count;
}