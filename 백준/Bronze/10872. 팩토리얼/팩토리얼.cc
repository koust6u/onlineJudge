#include <iostream>
using namespace std;
int ans = 0;

int factorial(int n){
    if( n <= 1)
        return 1;
    ans = n * factorial(n-1);

    return ans;
}

int main(){
    int n;
    cin >> n;

    cout << factorial(n);
}