#include <iostream>
using namespace std;

int main() {
    int count;
    cin >> count;

    for(int i = count; i >0; i--){
        for(int j = count-i; j >0; j--){
            cout << " ";
        }
        for(int j = i; j >0; j--){
            cout << "*";
        }
        cout << endl;
    }
}