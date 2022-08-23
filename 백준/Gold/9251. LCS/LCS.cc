#include <iostream>
#include <string>
using namespace std;
int DP[1001][1001] = {0,};

int main(){
    string str1, str2;
    cin >> str1 >> str2;

    for(int i = 1; i<= str1.length(); i++){
        for(int j = 1; j <= str2.length(); j++){
            if(str1.substr(i-1,1) ==  str2.substr(j-1,1)){
                DP[i][j] = DP[i-1][j-1] +1;
            }
            else{
                DP[i][j] = max(DP[i][j-1], DP[i-1][j]);
            }
        }
    }
    cout << DP[str1.length()][str2.length()] << endl;
}