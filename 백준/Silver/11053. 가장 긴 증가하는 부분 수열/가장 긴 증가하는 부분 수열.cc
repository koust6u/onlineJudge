#include <iostream>
#include <vector>
using namespace std;

int main(){
    int number;
    cin >> number;
    int* list = new int[number];
    int *DP = new int[number];
    vector<int> v;
    for(int i = 0; i < number; i++){
        int temp;
        cin >> temp;
        list[i] = temp;
        DP[i] = 1;
    }

    for(int i = 0; i < number; i++){
        for(int j = i ; j >=0; j--){
            if(list[j] < list[i]){
                DP[i] = max(DP[i], DP[j]+1);
            }
        }
    }

    int max = 0;
    for(int i = 0; i < number ; i++){
        if(max < DP[i]) max = DP[i];
    }
    cout << max;
}