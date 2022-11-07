#include<iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void init(bool ** visit,int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            visit[i][j]= false;
        }
    }
}
int bfs(int** list,bool** visit, int idx, int size){
    init(visit,size);
    int result = 0;
    for(int col = 0; col < size; col++){
        for(int row = 0; row <size; row++){
            if(!visit[col][row] &&  list[col][row] > idx){
                result++;
                queue<pair<int,int>> q;
                q.push(make_pair(row,col));
                visit[col][row] = true;
                while(!q.empty()){
                    int dx[4] = {-1,1,0,0};
                    int dy[4] = {0,0,-1,1};
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    for(int i = 0 ; i < 4; i++){
                        int nx = x + dx[i];
                        int ny = y + dy[i];
                        if(nx >=0 && nx < size && ny >= 0 && ny < size){
                            if(!visit[ny][nx] &&  list[ny][nx] > idx){
                                q.push(make_pair(nx,ny));
                                visit[ny][nx] = visit;
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}
int main() {
    int size, max = 0;
    cin >> size;
    vector<int> v;
    int **map = new int*[size];
    bool **visit = new bool*[size];
    for(int i = 0 ; i < size; i++){
        map[i] = new int[size];
        visit[i] = new bool[size];
        for(int j = 0; j < size; j++){
            cin >> map[i][j];
            if(map[i][j] > max)
                max = map[i][j];
        }
    }

    for(int i = 0; i < max; i++){
        v.emplace_back(bfs(map,visit,i , size));
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < size; i++){
        delete[] map[i];
        delete[] visit[i];
    }
    delete[] map;
    delete[] visit;
    cout << v[max-1];
}