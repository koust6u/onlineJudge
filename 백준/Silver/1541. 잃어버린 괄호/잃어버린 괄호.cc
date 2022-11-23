#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;

    int result = 0;
    string number;
    bool min = false;

    for(int i =0; i<= str.length();i++){
        if(str[i] == '-' || str[i] == '+'|| i ==str.length()){
            if(min){
                result -= stoi(number);
                number = "";
            }
            else{
                result += stoi(number);
                number = "";
            }
        }
        else{
            number += str[i];
        }
        if(str[i] == '-'){
            min = true;
        }
    }
    cout << result;
}