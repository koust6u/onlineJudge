#include <iostream>
#include <string>

using namespace std;

int main() {
    int count,a,b;
    char temp;
    cin >> count;
    for(int i = 0; i < count; i++){
        cin >> a >> temp >> b;
        cout << a+b << endl;
    }
}
