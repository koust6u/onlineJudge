#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dfs(char** list,bool** check, int size){
    int result = 0;
    for(int i = 0 ; i < size; i++){
        for(int j = 0 ; j < size; j++){
            queue<pair<int,int>> q;
            if(!check[i][j]){
                result++;
                char temp = list[i][j];
                q.push(make_pair(i,j));
                check[i][j] = true;
                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    int dx[4] = {-1,0,1,0};
                    int dy[4] = {0,1,0,-1};
                    for(int k = 0 ; k < 4; k++){
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if(nx >= 0 && nx < size && ny >= 0 && ny < size){
                            if((list[nx][ny] == temp) && !(check[nx][ny])){
                                q.push(make_pair(nx,ny));
                                check[nx][ny] = true;
                            }
                        }
                    }
                }

            }
        }
    }
    return result;
}

int main(){
    int size;
    cin >> size;
    char **map = new char*[size];
    bool **visit =  new bool*[size];
    bool **visit2 =  new bool*[size];
    for(int i =0 ; i < size; i++){
        map[i] = new char[size];
        visit[i] = new bool[size];
        visit2[i] = new bool[size];
    }
    for(int i = 0; i < size;i++){
        for(int j = 0; j< size; j++){
            cin >> map[i][j];
        }
    }
    int normal = dfs(map,visit,size);
    for(int i = 0 ; i < size; i++){
        for(int j = 0 ; j < size; j++){
            if(map[i][j] == 'G')
                map[i][j] = 'R';
        }
    }
    int weakness = dfs(map,visit2, size);
    cout << normal << " " <<  weakness << endl;
    delete [] map;
}