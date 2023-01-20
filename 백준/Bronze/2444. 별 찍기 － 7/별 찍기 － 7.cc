#include <iostream>
using namespace std;

int main(){
    int count;
    cin >> count;

    for(int i = count-1; i >=0 ; i--){
        for(int j = i;  j > 0 ; j--)
            cout << " ";
        int idx = 2*(count - i)-1;
        for(int j = 0 ; j < idx; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = count-1; i > 0; i--){
        for(int j = count; j > i; j--){
            cout << " ";
        }
        int idx = 2*i-1;
        for(int j = 0 ;j  < idx; j++){
            cout << "*";
        }
        cout << endl;
    }
}