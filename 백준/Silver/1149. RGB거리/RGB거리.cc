#include <iostream>
using namespace std;

int main(){
    int house[1001][3];

    int num;
    int cost[3];
    house[0][0] = 0;
    house[0][1] = 0;
    house[0][2] = 0;

    cin >> num;

    for(int i = 1; i<= num; i++){
        cin >> cost[0] >> cost[1] >> cost[2];
        house[i][0] = min(house[i-1][1], house[i-1][2]) + cost[0];
        house[i][1] = min(house[i-1][2], house[i-1][0]) + cost[1];
        house[i][2] = min(house[i-1][1], house[i-1][0]) + cost[2];
    }
    int answer = min(house[num][0], min(house[num][1], house[num][2]));
    cout << answer;
}

