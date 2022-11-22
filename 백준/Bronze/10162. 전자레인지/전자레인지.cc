#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    int count;
    cin >> count;
    vector<int> time;
    int answer[3] = {0,0,0};
    time.push_back(300);time.push_back(60); time.push_back(10);
    if(count % 10 != 0){
        cout << -1;
        return 0;
    }
    for(int i =0; i< time.size(); i++){
        while(true){
            if(count - time[i] >= 0){
                count -= time[i];
                answer[i]++;
            }
            else
                break;
        }
    }
    for(int i =0; i < 3; i++){
        cout << answer[i] << " ";
    }
}