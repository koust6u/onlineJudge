#include <iostream>
using namespace std;

int main(){
    int amount,count, sumOfPrice = 0;
    cin >> amount >> count;
    
    for(int i =0; i< count ;i++){
        int price, number;
        cin >> price >> number;
        sumOfPrice += price*number;
    }
    if(sumOfPrice == amount){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}