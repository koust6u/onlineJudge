#include <iostream>
using namespace std;
/*
 * 1. 데이터 타입 -> 자료형
 * 2. 조건문
 * 3. 반복문
 * 4. 포인터
 * 5. 함수
 * */

// ( 1, -3) -> x = 1,y = -3  --> 4 사분면
// (-2 , 1) -> x = -2 , y= 1  --> 2 사분면


int main(){
    int x, y;
    cin >> x >> y;
    if(x < 0){
        if(y < 0){
            cout << 3 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
    else{
        if(y < 0){
            cout << 4 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
}