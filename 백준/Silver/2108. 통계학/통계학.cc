#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

bool compare(pair<int,int> i, pair<int,int> j){
    return j.second < i.second;
}
void input(vector<int>& v){
    int count;
    cin >> count;
    for(int i = 0 ; i < count; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
}

int arithmetic(vector<int>& v){
    int avg = 0;
    for(auto& i: v){
        avg += i;
    }
    avg = round((double)avg / v.size());
    return avg;
}

int median(vector<int>& v){
    sort(v.begin(), v.end());
    return v[v.size()/2];
}

int mode(vector<int>& v){
    vector<pair<int,int>> temp;
    for(auto& i: v){
        bool flag = false;
        for(auto& j : temp){
            if(i == j.first){
                j.second++;
                flag = true;
            }
        }
        if(!flag){
            temp.emplace_back(make_pair(i,1));
        }
    }

    sort(temp.begin(), temp.end(),compare);

    if(temp.size() == 1){
        return temp[0].first;
    }

    if(temp[0].second != temp[1].second)
        return temp[0].first;
    else{
        vector<int> answers;
        int maxVal = temp[0].second;
        for(auto& i : temp){
            if(i.second == maxVal)
                answers.push_back(i.first);
            else break;
        }
        sort(answers.begin(), answers.end());
        return answers[1];
    }

}

int range(vector<int>& v){
    return v[v.size()-1] - v[0];
}
int main(){
    vector<int> list;
    input(list);
    cout << arithmetic(list) << endl;
    cout << median(list) << endl;
    cout << mode(list) << endl;
    cout << range(list) << endl;
}