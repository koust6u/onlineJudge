#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
vector<int> v;
bool visit[25][25] = {false,};
int BFS(string* str, int x, int y){
    int size = str->length();
    int ret = 0;
    if( x >= 0 && y >= 0 && x < size  && y < size && !visit[x][y] && str[x][y] == '1'){
        int mX[4] = {-1,0,1,0};  // 왼,아래, 오, 위
        int mY[4] = {0,1,0,-1};
        queue<pair<int,int>> q;
        q.push(make_pair(x,y));
        ret = 1;
        int temp = 1;
        visit[x][y]= 1;
        while(!q.empty()){
            int tX = q.front().first;
            int tY = q.front().second;

            q.pop();
            for(int i = 0 ; i < 4; i++){
                int nX = tX+mX[i];
                int nY = tY+mY[i];
                if(0 <= nX && nX < size && 0 <= nY && nY < size){
                    if(str[nX][nY] == '1' && visit[nX][nY] == 0){
                        visit[nX][nY] =1;
                        q.push(make_pair(nX,nY));
                        temp++;
                    }
                }
            }
        }
        v.push_back(temp);
    }
    return ret;
}

int main(){
    int size, result = 0;
    cin >> size;
    string * map = new string[size];
    for(int i = 0 ;i < size; i++){
        string temp;
        cin >> temp;
        map[i] = temp;
    }
    for(int i = 0 ; i < size; i++){
        for(int j = 0; j < size; j++){
            int temp = 0;
            temp = BFS(map,i,j);
            if(temp == 1){
                result++;
            }
        }
    }
    sort(v.begin(), v.end());
    cout << result << endl;
    for(int i = 0; i <v.size(); i++){
        cout << v[i] << endl;
    }
}