#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int map[100][100] = {0};

int main(){
    int count;
    cin >> count;
    for(int i = 0 ; i < count; i++){
        int row, col;
        cin >> row >> col;
        for(int j = row-1; j< row+9; j++){
            for(int k = col -1; k < col+9; k++){
                map[j][k] = 1;
            }
        }
    }
    int result = 0;
    for(auto & i : map){
        for(int j : i){
            if(j) result++;
        }
    }
    cout << result << endl;
}