#include <iostream>
#include <stdio.h>
using namespace std;


void hanoi(int from, int to, int number){
    if(number == 1){
        printf("%d %d\n", from, to);
        return;
    }
        int empty = 6 - from - to;
        hanoi(from, empty, number-1);
        printf("%d %d\n", from, to);
        hanoi(empty, to,number-1);
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int numberOfDisk;
    cin >> numberOfDisk;
    cout << (1<<numberOfDisk)-1<< endl;
    hanoi(1,3,numberOfDisk);
}