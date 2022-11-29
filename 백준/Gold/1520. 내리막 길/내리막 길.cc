#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int col, row;
int map[501][500];
int dp[501][500];
bool visit[501][501];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};


int dfs(int x, int y){
    if(x == col-1 and y == row-1) return 1;
    if(visit[x][y]) return dp[x][y];
    visit[x][y] =true;
    for(int i=0;i<4; i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if((map[x][y] > map[nx][ny]) && 0 <= nx  && nx< col  && 0<= ny && ny < row){
            dp[x][y] += dfs(nx,ny);
        }
    }
    return dp[x][y];
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> col >> row;
    for(int i = 0; i < col; i++){
        for(int j =0; j < row; j++){
            cin >> map[i][j];
        }
    }
    cout << dfs(0,0);
}