#include <iostream>
#include <string>
using namespace std;

int main(){
    int idx = 0;
    while(true){
        int L,P,V, result = 0;

        cin >> L >> P >> V;
        if(L == 0 && P == 0 && V == 0) break;
        int a =V/P;
        int b = V%P;
        result += a*L;
        if(b >= L) result += L;
        else result += b;
        idx++;
        cout <<"Case "<<idx <<": "<<   result << endl;
    }
}