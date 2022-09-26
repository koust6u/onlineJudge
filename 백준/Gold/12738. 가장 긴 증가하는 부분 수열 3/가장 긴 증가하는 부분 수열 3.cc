#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n ; i++){
        int input;
        cin >> input;
        if(v.empty() || v.back() < input)
            v.push_back(input);
        else{
            *lower_bound(v.begin(), v.end(), input) = input;
        }
    }
    cout << v.size() << endl;

}