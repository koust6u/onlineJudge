#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    for(unsigned int i = 0 ; i < number; i++){
        int exchange;
        int remain;
        cin >> exchange;
        cout << exchange /25 << " ";
        remain = exchange% 25;
        cout << remain /10 << " ";
        remain %= 10;
        cout << remain/5 << " ";
        remain %= 5;
        cout << remain/1 << endl;
    }
}