#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int row, col;




void input(int** &matrix, int** &DP){ //OK
    cin >> col >> row;
    matrix = new int*[col+1];
    DP = new int*[col+1];
    for(int i = 0 ; i <= col; i++){
        matrix[i] = new int[row+1];
        DP[i] = new int[row+1];
        for(int j = 0; j<= row; j++){
            matrix[i][j] = 0;
            DP[i][j] = 0;
        }
    }
    for(int i = 1; i <= col; i++){
        for(int j = 1; j<= row; j++){
            cin >> matrix[i][j];
        }
    }
}


void test(int** test){
    for(int i = 0 ; i <= col; i++){
        for(int j = 0 ; j <= row; j++){
            cout << test[i][j] << " ";
        }
        cout << endl;
    }
}

/**
 * 1.방향에 대한 정보: 우, 아래 , 우하향
 * 2.index를 따라 DP 배열 채워나가자
 * 3. 값 반환
 */
void solve(int** matrix, int** DP){
    for(int i = 1; i <=  col; i++){
        for(int j = 1; j <= row ; j++){
            DP[i][j] = max(DP[i][j-1], max(DP[i-1][j], DP[i-1][j-1])) + matrix[i][j];
            //cout << DP[i][j] << endl;
        }
    }
    cout << DP[col][row];

}
int main(){
    int** matrix, **DP;
    input(matrix, DP);
    //test(matrix);
    solve(matrix, DP);

}