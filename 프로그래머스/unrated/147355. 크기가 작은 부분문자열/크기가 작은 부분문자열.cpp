#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    unsigned long long partValue = stoll(p);
    if(t.length() < p.length()){
        return answer;
    }
    for(int i = 0; i <= (t.length() - p.length()); i++){
        string temp = t.substr(i,p.length());
        unsigned long long a = stoll(temp);
        cout << a << endl;
        if(partValue >= a){
            answer++;
        }
    }
    return answer;
}

int main(){
    cout << solution("21431412341242421341234213412414212342142134142133241213412421412342141341242134214214124213421342141421414"
                     "123421414124213412421342134213421421421893748129748923749237829174128394812974819748217482917421984781247891284219741238472197421897412894"
                     "9804293839084091840931284901328412094812094812904819042189481290384190854342353245234085902348987283497587432895325723058324782304283520832830237892"
                     "2349852345273423475923532402134213412421428179789210471283990214812378904123", "934515313533432122");
}