#include <iostream>
using namespace std;

int main(){
    int a, b, c, result;
    cin >> a >> b >> c;

    if(a == b && b == c){
        result = a*1000+10000;
    }
    else if(a==b && a !=c ){
        result = a*100 + 1000;
    }
    else if(b==c && a != c){
        result = b*100 +1000;
    }
    else if(a==c && a!= b){
        result = a*100+1000;
    }
    else{
        int max = 0;
        int arr[3] = {a, b, c};
        for(int i = 0 ; i < 3; i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }
        result = max*100;
    }

    cout << result;

}