#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    map<string, int> m;
    for(auto &i: clothes){
       m[i[1]]++;
    }
    vector<int> list;
    int result = 1;
    for(auto& i: m){
        result *=i.second+1;
    }
    
    return result -1;
}