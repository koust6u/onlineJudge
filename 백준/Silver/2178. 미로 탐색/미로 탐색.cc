#include <iostream>
#include <string>
#include <queue>
using namespace std;
int n,m;
bool visited[101][101];
int check[101][101];

void initialization(int **list){
    string str;
    cin.ignore();
    for(int i = 0; i < n; i++){
        list[i] = new int[m+1];
        getline(cin,str);
        for(int j = 0; j < m; j++){
            list[i][j] = stoi(str.substr(j,1));
        }
    }
}

void BFS(int **list, int x1,int y1){
    int dX[4] = {0,0, -1,1};
    int dY[4] = { -1,1,0,0};
    visited[x1][y1] = 1;

    queue<pair<int,int>> que;
    que.push(make_pair(x1,y1));

    while(!que.empty()){
        int x=que.front().first;
        int y=que.front().second;

        que.pop();
        for(int i = 0; i <4; i++){
            int nX = x + dX[i];
            int nY = y + dY[i];

            if(0 <= nX && nX < n && 0 <= nY && nY < m){
                if(list[nX][nY] == 1 && visited[nX][nY] == 0){
                    check[nX][nY] = check[x][y] + 1;
                    visited[nX][nY] = 1;
                    que.push(make_pair(nX, nY));
                }
            }
        }
    }

}
int main() {
    cin >> n >> m;
    int **matrix = new int*[n];
    initialization(matrix);
    BFS(matrix,0,0);
    cout << check[n-1][m-1]+1;
}
