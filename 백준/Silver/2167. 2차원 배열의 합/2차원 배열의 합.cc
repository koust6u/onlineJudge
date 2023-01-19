#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int col, row;
    cin >> col >> row;
    int** map = new int*[col];
    for(int i = 0 ; i < col; i++) {
        map[i] = new int[row];
        for(int j = 0; j < row; j++){
            cin >> map[i][j];
        }
    }
    int count, startX,startY,distX,distY;
    cin >> count;
    for(int i = 0 ; i < count ;i++){
        int result = 0;
        cin >> startX >> startY >> distX >> distY;
        for(int j = startX-1; j < distX; j++){
            for(int k = startY-1; k < distY; k++){
                result += map[j][k];
            }
        }
        cout << result << endl;
    }
}