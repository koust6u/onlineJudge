#include <iostream>
#include <vector>
using namespace std;
int list[1025][1025];
int dp[1025][1025];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int length, command;
    cin >> length >> command;
    vector<int> answer;
    for(int i =1; i<= length ;i++){
        for(int j = 1; j<= length; j++){
            cin >> list[i][j];
            dp[i][j] = dp[i][j-1] + dp[i-1][j] + list[i][j] - dp[i-1][j-1];
        }
    }

    for(int i = 0; i < command; i++){
        int x1, y1, x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int temp = dp[x2][y2] - dp[x2][y1-1] - dp[x1-1][y2] + dp[x1-1][y1-1];
        cout << temp << '\n';
    }


}