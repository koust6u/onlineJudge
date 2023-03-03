#include <iostream>
using namespace std;

int main(){
    int min,max;
    string a,b;
    cin >> a >> b;
    string minStr, maxStr;
    for(char i : a){
        if(i == '5') maxStr +='6';
        else maxStr += i;
        if(i == '6') minStr +='5';
        else minStr += i;
    }
    min = stoi(minStr);
    max = stoi(maxStr);
    minStr ="";
    maxStr ="";
    for(char i: b){
        if(i == '5') maxStr +='6';
        else maxStr += i;
        if(i == '6') minStr +='5';
        else minStr += i;
    }
    min += stoi(minStr);
    max += stoi(maxStr);

    cout << min << " " << max << endl;
}