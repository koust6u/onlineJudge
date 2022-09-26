#include <iostream>
#include <queue>
using namespace std;
int visit[100001] = { 0,};

int BFS(int hide, int seek){
    queue<int> q;
    q.push(seek);
    if(hide == seek)
        return 0;
    while(!q.empty()){
        int x = q.front();
        int nX[4] = {x+1, x-1, x*2};
        q.pop();
        for(int i = 0; i < 3; i++){
            if(0 <= nX[i] && nX[i] <= 100000 && visit[nX[i]] == 0){
                visit[nX[i]] = visit[x]+1;
                q.push(nX[i]);
                if(nX[i] == hide){
                    return visit[hide];
                }

            }
        }
    }

    return -1;
}
int main(){
    int seek, hide;
    cin >> seek >> hide;
    cout << BFS(hide, seek) << endl;

}
