#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
bool visit[50][50] = {false,};
int BFS(int** map, int x, int y, int n, int m){
    int ret = 0;
    if( x >= 0 && y >= 0 && x < m && y < n && !visit[x][y] && map[x][y] == 1){
        int mX[4] = {-1,0,1,0};  // 왼,아래, 오, 위
        int mY[4] = {0,1,0,-1};
        queue<pair<int,int>> q;
        q.push(make_pair(x,y));
        ret = 1;
        visit[x][y]= 1;
        while(!q.empty()){
            int tX = q.front().first;
            int tY = q.front().second;

            q.pop();
            for(int i = 0 ; i < 4; i++){
                int nX = tX+mX[i];
                int nY = tY+mY[i];
                if(0 <= nX && nX < m && 0 <= nY && nY < n){
                    if(map[nX][nY] == 1 && visit[nX][nY] == 0){
                        visit[nX][nY] =1;
                        q.push(make_pair(nX,nY));
                    }
                }
            }
        }
    }
    return ret;
}

int main(){
    int test, n, m, cabbage;
    cin >> test;
    vector<int> v;
    for(int i = 0; i < test; i++){
        cin >> m >> n >> cabbage;
        int count = 0;
        int ** map = new int*[n];
        for(int j = 0; j < n; j++){
            map[j] = new int[m];
            for(int k = 0; k < m; k++){
                map[j][k] = 0;
            }
        }
        for(int j = 0; j < cabbage; j++){
            int x, y;
            cin >> x >> y;
            map[y][x] = 1;
        }
        for(int j = 0; j < n ; j++){
            for(int k = 0; k < m; k++){
                int temp = BFS(map, j,k,m,n);
                if(temp == 1){
                    count++;
                }
            }
        }
        v.push_back(count);
        delete []map;
        for(auto & j : visit){
            for(bool & k : j){
                k =false;
            }
        }
    }
    for(int i = 0; i < test; i++){
        cout << v[i] << endl;
    }
}
