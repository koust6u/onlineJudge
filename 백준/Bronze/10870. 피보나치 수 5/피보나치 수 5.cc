#include <iostream>
using namespace std;


int fibonacci(int n){
    int ret = 0;
    if(n == 1)
        return 1;
    else if(n == 0)
        return 0;
    else{
        return ret = fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int n;
    cin >> n;

    cout << fibonacci(n);
}