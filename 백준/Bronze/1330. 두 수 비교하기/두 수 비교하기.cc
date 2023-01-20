#include <iostream>
using namespace std;

int main(){
    int number1, number2;
    cin >> number1 >> number2;
    if(number1 < number2){
        cout << "<" << endl;
    }
    else if(number1 > number2){
        cout << ">" << endl;
    }
    else if(number1 == number2){
        cout << "==" <<endl;

    }
}