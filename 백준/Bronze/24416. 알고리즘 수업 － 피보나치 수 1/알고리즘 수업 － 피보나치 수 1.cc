#include <iostream>
using namespace std;
double index = 0;

int fib(int n){
    if( n== 1 || n==2)
        return 1;
    else{
        return fib(n-1) + fib(n-2);
    }
}
int main(){
    int number;
    cin >> number;
    cout <<    fib(number) << " ";
    cout << number-2;
}