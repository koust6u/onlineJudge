#include <iostream>
using namespace std;

int main(){
    int count;
    cin >> count;

    for(int i = 1 ; i <= 9; i++){
        cout << count << " * " << i << " = " << count*i << endl;
    }
}