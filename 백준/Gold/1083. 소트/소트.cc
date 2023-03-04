#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> input(){

    int number;
    cin >> number;
    vector<int> v;
    for(int i = 0 ; i < number ;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    return v;
}

int main() {
    vector<int> v = input();
    vector<int> answer;
    int count;
    cin >> count;
    if(count == 0){
        for(auto i: v){
            cout << i << " ";
        }
        return 0;
    }

    while(!v.empty()){
        int max = v[0];
        int idx = 0;
        if(count+1 < v.size()){
            for(int i = 0 ; i < count+1; i++){
                if(v[i] > max){
                    idx= i;
                    max = v[i];
                }
            }
            count -= idx;
            answer.push_back(max);
            v.erase(v.begin()+ idx);
        }
        else{
            for(int i = 0 ; i < v.size(); i++){
                if(v[i] > max){
                    idx= i;
                    max = v[i];
                }
            }
            count -= idx;
            answer.push_back(max);
            v.erase(v.begin()+ idx);
        }
    }


    for(auto i: v){
        answer.push_back(i);
    }

    for(auto i : answer){
        cout << i << " " ;
    }
}
