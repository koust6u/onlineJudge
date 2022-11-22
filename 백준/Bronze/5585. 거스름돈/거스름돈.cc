#include <iostream>
#include <vector>
using namespace std;

int main(){
    int pay, change = 0, idx =0;
    cin >> pay;
    pay = 1000 - pay;
    vector<int> v;
    v.push_back(500); v.push_back(100); v.push_back(50); v.push_back(10); v.push_back(5); v.push_back(1);
    for(int i =0; i < v.size(); i++){
        while(true){
            if(pay - v[i] >= 0){
                pay -= v[i];
                change++;
            }
            else{
                idx++;
                break;
            }
        }
    }
    cout << change << endl;
}