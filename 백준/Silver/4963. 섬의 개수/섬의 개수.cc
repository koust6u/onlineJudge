#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dfs(int** list,int row, int col){
    int count = 0;
    bool **visit = new bool*[col];
    for(int i = 0 ; i < col; i++){
        visit[i]= new bool[row];
        for(int j = 0; j < row; j++){
            visit[i][j] = false;
        }
    }
    int dx[8] = {-1,-1,-1,0,0,1,1,1};
    int dy[8] = {-1,0,1,1,-1,1,0,-1};
    for(int i = 0 ; i < col ; i++){
        for(int j = 0; j < row; j++){
            if(list[i][j] == 1 && !visit[i][j]){
                count++;
                queue<pair<int,int>>q;
                q.push(make_pair(i,j));
                visit[i][j] = true;
                while(!q.empty()){
                    int x = q.front().second;
                    int y = q.front().first;
                    q.pop();
                    for(int k = 0 ; k < 8; k++){
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if(nx >= 0 && nx <row && ny >=0 && ny < col){
                            if(list[ny][nx] ==1 && !visit[ny][nx]){
                                visit[ny][nx] = true;
                                q.push(make_pair(ny,nx));
                            }
                        }
                    }
                }
            }
        }
    }
    delete[] visit;
    return count;
}
void solve(vector<int> & v){
    while(true){
        int row, col;
        cin >> row >> col;
        if((!row) && !(col)){
            return;
        }
        int** map = new int*[col];
        for(int i = 0; i < col; i++){
            map[i] = new int[row];
        }
        for(int i = 0 ; i < col; i++){
            for(int j = 0 ; j < row; j++){
                cin >> map[i][j];
            }
        }
        v.push_back(dfs(map,row, col));
        delete[] map;
    }
}

void print(vector<int> & v){
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i] << endl;
    }
}

int main(){
    vector<int> solutions;
    solve(solutions);
    print(solutions);
}