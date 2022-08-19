#include <iostream>
#include <vector>
using namespace std;


void fibonacci(int value){
    int zero[100] = {1,0,};
    int one[100] = {0,1,};
    for(int i = 2; i <= value; i++){
        zero[i] = zero[i-1] + zero[i-2];
        one[i] = one[i-1] + one[i-2];
    }
    cout << zero[value] << " " << one[value] << endl;
}
int main(){
    int num;
    cin >> num;
    int *list = new int[num];
    for(int i = 0; i < num; i++){
        int temp;
        cin >> temp;
        list[i] = temp;
    }
    for(int i = 0; i < num; i++){
        fibonacci(list[i]);
    }
}