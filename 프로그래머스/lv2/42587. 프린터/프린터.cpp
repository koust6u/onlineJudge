#include <string>
#include <queue>
#include <vector>
#define pair pair<int,bool>
using namespace std;

int solution(vector<int> priorities, int location) {
    deque<pair> printQ;
    int result = 0;
    for(auto& i: priorities){
        printQ.emplace_back(i, false);
    }
    printQ[location].second = true;
    while(true){
        pair temp = printQ.front();
        printQ.pop_front();
        bool flag = false;
        for(int i = 0 ; i < printQ.size(); i++){
            if(temp.first < printQ[i].first){
                flag = true;
                break;
            }
        }
        if(!flag){
            result++;
            if(temp.second)
                return result;
        }
        else{
            printQ.push_back(temp);
        }
    }
}