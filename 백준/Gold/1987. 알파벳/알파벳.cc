#include <iostream>
#include <vector>
using namespace std;
int col, row,length;
char** map;
bool visit[26];

void input(){
    cin >> col >> row;
    map = new char*[col];
    for(int i =0 ; i < col; i++){
        map[i] = new char[row];
        for(int j= 0 ; j < row; j++){
            cin >> map[i][j];
        }
    }
    visit[map[0][0] - 65] = true;

}

void dfs(int x, int y, int idx){
    length = max(length, idx);
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};
    for(int i = 0 ; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0&& nx < row && ny >= 0 && ny < col){
            int temp = ((int) map[ny][nx]) - 65;
            if(!visit[temp]){
                visit[temp] = true;
                dfs(nx,ny,idx+1);
                visit[temp] = false;
            }
        }
    }

}

void free(){
    for(int i =0 ; i < col; i++){
        delete[] map[i];
    }
    delete[] map;
}

int main(){
    input();
    dfs( 0,0,1);
    cout << length << endl;
    free();
}