#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
#define long long long
int main(){
    int count, total, sub;
    long result = 0;
    cin >> count;
    auto classes = new int[count];
    for(int i = 0 ; i< count; i++){
        cin >> classes[i];
    }
    cin >> total >> sub;
    for(int i = 0 ;i < count; i++){
        classes[i] = classes[i] - total;
        result++;

        if(classes[i] > 0){
            result += classes[i]/sub;
            if(classes[i] % sub > 0) result++;
        }
    }
    cout << result;
}