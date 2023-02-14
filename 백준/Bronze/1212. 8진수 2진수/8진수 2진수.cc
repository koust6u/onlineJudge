#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <queue>
using namespace std;
/**
* 8진수 -> 2진수 변환
*/

map<char,string> makeMap(){
    map<char,string> m;
    m.emplace('0',"000");
    m.emplace('1', "001");
    m.emplace('2', "010");
    m.emplace('3', "011");
    m.emplace('4', "100");
    m.emplace('5',"101");
    m.emplace('6', "110");
    m.emplace('7', "111");
    return m;
}

void parsing(string &s){
    while(true){
        if(s[0] == '1'){
            return;
        }
        s.erase(0,1);

    }
}
int main(){
    ios_base :: sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = true;
    string octal, binary;
    cin >> octal;
    if(octal.length() == 1 && octal[0] == '0'){
        cout << "0";
        return 0;
    }
    map<char, string> table= makeMap();
    for(auto& i: octal){
        if(!flag){
            binary.append(table.at(i));
        }
        else{
            if(i == '1')
                binary.append("1");
            else if(i == '2')
                binary.append("10");
            else if(i == '3')
                binary.append("11");
            else if(i =='4')
                binary.append("100");
            else if(i == '5')
                binary.append("101");
            else if(i == '6')
                binary.append("110");
            else if(i == '7')
                binary.append("111");
            else
                continue;
            flag= false;
        }

    }
    cout << binary;
}