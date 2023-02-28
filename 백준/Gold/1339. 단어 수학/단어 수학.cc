#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
map<char, int> sum;
map<char,int> alphabet;

bool compare(pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
}

int main() {
    int number;
    cin >> number;
    vector<string> v;
    for (int i = 0; i < number; i++) {
        string temp;
        cin >> temp;
        v.push_back(temp);
    }

    for (auto temp: v) {
        for (int j = 0; j < temp.length(); j++) {
            sum[temp[j]] += (int) pow(10, temp.length() - (j + 1));
        }
    }
    vector<pair<char, int>> sortedMap(sum.begin(), sum.end());
    sort(sortedMap.begin(), sortedMap.end(), compare);

    int idx = 9;
    for (auto &i: sortedMap) {
        alphabet[i.first] = idx;
        idx--;
    }

    int totalSum = 0;
    for (auto &i: v) {
        for (int j = 0; j < i.size(); j++) {
            totalSum += alphabet[i[j]]*(int) pow(10, i.length() - (j + 1));
        }
    }
    cout << totalSum;
}