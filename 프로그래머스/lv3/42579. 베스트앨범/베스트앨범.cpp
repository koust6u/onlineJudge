#include <string>
#include <vector>
#include <map>
#include <queue>
#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;


struct Item{
    string name;
    int number;
    int index;
};

bool compare(Item a, Item b){
    return  a.number> b.number;
}

bool compare2(pair<string,int> a, pair<string,int> b){
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<Item> v;
    map<string, int> m;
    vector<int> result;
    for(int i = 0; i < genres.size(); i++){
        Item item;
        item.name = genres[i];
        item.number = plays[i];
        item.index = i;
        m[item.name] += item.number;
        v.push_back(item);
    }
    vector<pair<string,int>> nameP;
    for(auto &i: m){
        nameP.emplace_back(i);
    }
    sort(nameP.begin(),nameP.end(), compare2);
    for(auto&i : nameP){
        string name = i.first;
        vector<Item> temp;
        for(int j = 0; j < v.size(); j++){
            if(v[j].name == name){
                temp.push_back(v[j]);
            }
        }
        
        sort(temp.begin(),temp.end(), compare);
        result.push_back(temp[0].index);
        if(temp.size() > 1){
            result.push_back(temp[1].index);
        }
    }
    return result;
}
