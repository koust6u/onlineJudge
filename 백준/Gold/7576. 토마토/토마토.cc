#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int visit[1000][1000];
int** initialize(int row, int col){
    int** map = new int*[col];
    for(int i = 0; i < col; i++){
        map[i] = new int[row];
        for(int j = 0; j < row; j++){
            cin >> map[i][j];
            if(map[i][j] == -1)
                visit[i][j] = -1;
            else
                visit[i][j] = 0;
        }
    }
    return map;
}

void BFS(int **map, int row, int col){
    queue<pair<int,int>> q;
    int dX[4] = {1,0,-1,0};
    int dY[4] = { 0,1,0,-1};
    for(int i = 0; i < col; i++){
        for(int j= 0; j < row; j++){
            if(map[i][j] == 1){
                q.push(make_pair(j,i));
                visit[i][j] = 1;
            }
        }
    }
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nX = x + dX[i];
            int nY = y + dY[i];

            if(0 <= nX && nX < row && 0 <= nY && nY < col){
                if(map[nY][nX] == 0 && visit[nY][nX] == 0){
                    visit[nY][nX]  = visit[y][x]+1;
                    q.push(make_pair(nX,nY));
                }
            }
        }
    }
}

int evaluate(int row, int col){
    int max = 0;
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            if(visit[i][j]== 0)
                return -1;
            else if(max < visit[i][j])
                max = visit[i][j];
        }
    }
    return max-1;
}
int main(){
    int row, col;
    cin >> row >> col;
    int **map = initialize(row, col);
    BFS(map,row, col);
    cout << evaluate(row, col);
}