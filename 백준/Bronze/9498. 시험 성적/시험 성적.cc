#include <iostream>
using namespace std;

int main(){
    int exam;
    cin >> exam;
    if(90 <= exam  ){
        cout << 'A' << endl;
    }
    else if(80 <= exam){
        cout << 'B' << endl;
    }
    else if(70 <= exam){
        cout << 'C' << endl;
    }
    else if(60 <= exam){
        cout << 'D' << endl;
    }
    else{
        cout << 'F' << endl;
    }
}