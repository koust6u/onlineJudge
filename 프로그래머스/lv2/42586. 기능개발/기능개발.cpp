#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    deque<int> q,speedQ;
    vector<int> answer;
    for(int i =0; i<progresses.size(); i++){
        q.push_back(progresses[i]);
        speedQ.push_back(speeds[i]);
    }
    while(!q.empty()){
        int result = 0;
        while(q.front() < 100){
            for(int i=0; i < q.size(); i++){
                q[i] += speedQ[i];
            }
        }
        while(!q.empty()){
            if(q.front() >= 100){
                result++;
                q.pop_front();
                speedQ.pop_front();
            }
            else{
                break;
            }
        }
        answer.push_back(result);
    }
    return answer;
}