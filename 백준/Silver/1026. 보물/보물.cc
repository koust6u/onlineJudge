#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int a, int b){
    return a > b;
}
int main(){
    int count;
    cin >> count;
    vector<int> increase, decrease;
    for(int i =0; i< count; i++){
        int temp;
        cin >> temp;
        increase.push_back(temp);
    }
    for(int i =0; i < count; i++){
        int temp;
        cin >> temp;
        decrease.push_back(temp);
    }
    sort(increase.begin(), increase.end());
    sort(decrease.begin(), decrease.end(), compare);
    int result = 0;
    for(int i = 0; i < count; i++){
        result += increase[i] * decrease[i];
    }
    cout << result;
}