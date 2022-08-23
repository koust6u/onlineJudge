#include <iostream>
#include <vector>
using namespace std;


int main(){
    int count;
    cin >> count;
    int T[16] = {0,}, P[16]={0,},DP[16]= {0,};
    vector<int> idx[16];
    for(int i = 0; i <= count; i++){
        if(i == 0){
            T[i] = 0;
            P[i] = 0;
        }
        else{
            int x, y;
            cin >> x >> y;
            T[i] = x;
            P[i] = y;
            if(T[i]+i -1 <= count){
                idx[T[i]+i-1].push_back(i);
            }
        }
    }
    for(int i = 1 ; i <= count; i++){
        int temp = 0;
        for(int j = 0; j < idx[i].size(); j++){
            temp = max(temp , P[idx[i][j]] + DP[idx[i][j]-1]);
        }
        temp = max(temp, DP[i-1]);
        DP[i] = temp;
    }

    cout << DP[count];
}