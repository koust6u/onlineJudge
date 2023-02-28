#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int start ,dest;
    cin >> start >> dest;
    int result = 0;
    while(start != dest){
        if(dest % 10 == 1){
            dest /= 10;
            result++;
            continue;
        }
        if(dest %2 != 0 || dest <= 0){
            result = -2;
            break;
        }
        else{
            dest /=2;
            result++;
        }

    }
    cout << result+1;
}