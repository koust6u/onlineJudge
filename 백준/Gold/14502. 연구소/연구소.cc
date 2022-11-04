#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int col , row;
int map[10][10]; //init by 0
int Copy[10][10];
bool visit[10][10]; // init by 0

void CopyMap(){
    for(int i = 0; i <= col+1; i++){
        for(int j= 0; j <= row+1; j++){
            Copy[i][j] = map[i][j];
            visit[i][j] = 0;
        }
    }
}

void input(){
    cin >> col >> row;

    for(int i = 0 ; i < 10; i++){
        for(int j = 0; j< 10; j++){
            map[i][j] = 1;
        }
    }
    for(int i = 1; i <= col; i++){
        for(int j = 1; j <= row; j++){
            cin >> map[i][j];
        }
    }
}

void test(){
    for(int i = 0; i <= col+1; i++){
        for(int j= 0; j <= row+1; j++){
            cout << Copy[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int evaluate(){
    int result = 0;
    for(int i =0 ; i <= col+1; i++){
        for(int j = 0; j <= row+1; j++){
            if(Copy[i][j] == 0){
                result++;
            }
        }
    }
    return result;
}
void SpreadByBfs(int x,int y){
    Copy[x][y] = 2;
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    visit[x][y] = true;
    int dX[4] = {-1,0,1,0};
    int dY[4] = {0,-1,0,1};
    while(!q.empty()){
        pair<int,int> temp = q.front();
        q.pop();
        for(int i = 0 ; i < 4; i++){
            int nX = temp.first + dX[i];
            int nY = temp.second + dY[i];

            if(!Copy[nX][nY] && !visit[nX][nY]){
                visit[nX][nY] = true;
                Copy[nX][nY] = 2;
                q.push(make_pair(nX,nY));
            }
        }
    }
}

void solve(){
    vector<pair<int,int>> virus,empty;
    vector<int> solutions;
    for(int i = 0; i <= col+1; i++){
        for(int j = 0; j<= row+1; j++){
            if(map[i][j] == 2){
                virus.emplace_back(make_pair(i,j));
            }
            else if(map[i][j] == 0){
                empty.emplace_back(make_pair(i,j));
            }
        }
    }
    for(int i = 0; i < empty.size(); i++){
        for(int j = i+1; j < empty.size(); j++){
            for(int k = j+1; k < empty.size(); k++){
                CopyMap();
                Copy[empty[i].first][empty[i].second] = 1;
                Copy[empty[j].first][empty[j].second] = 1;
                Copy[empty[k].first][empty[k].second] = 1;
                for(int x = 0; x < virus.size(); x++){
                    SpreadByBfs(virus[x].first, virus[x].second);
                }
                solutions.push_back(evaluate());
                Copy[empty[i].first][empty[i].second] = 0;
                Copy[empty[j].first][empty[j].second] = 0;
                Copy[empty[k].first][empty[k].second] = 0;

            }
        }
    }
    cout << *max_element(solutions.begin(), solutions.end());
}
int main(){
    input();
    solve();

}