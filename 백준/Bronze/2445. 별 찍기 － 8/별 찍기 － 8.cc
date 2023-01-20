#include <iostream>
using namespace std;

int main(){
    int count;
    cin >> count;
    for(int i = 1 ; i <= count ; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        for(int j = count-i; j > 0; j--){
            cout << " ";
        }
        for(int j= count-i; j > 0 ; j--){
            cout << " ";
        }
        for(int j = 0; j < i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i < count; i++){
        for(int j = i; j < count; j++){
            cout << "*";
        }

        for(int j = count-i; j < count; j++){
            cout << " ";
        }
        for(int j = count-i; j < count; j++){
            cout << " ";
        }
        for(int j = i; j < count ; j++){
            cout << "*";
        }
        cout << endl;
    }
}