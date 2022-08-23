#include <iostream>
#include <vector>
using namespace std;
int DP[31][31] = {0,};

int main(){
    int count;
    cin >> count;

    for(int i = 1; i <= 30 ; i++){
        DP[1][i] = i;
    }

    for(int i =2; i<= 30; i++){
        for(int j=2; j <= 30;  j++){
            if( i == j)
                DP[i][j] = 1;
            else if(i > j)
                DP[i][j] =0;
            else
                DP[i][j] = DP[i-1][j-1] + DP[i][j-1];
        }
    }
    vector<int> v;
    for(int i = 0 ; i < count; i++){
        int x, y;
        cin >> x >> y;
        v.push_back(DP[x][y]);
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}