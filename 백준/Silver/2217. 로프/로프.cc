#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int count, result = 0;
    cin >> count;
    int* rope = new int[count];
    for(int i =0; i < count; i++){
        cin >> rope[i];
    }
    sort(rope, rope+count);

    for(int i = 0; i< count; i++){
        result = max(result, (count- i) * rope[i]);
    }

    cout << result;
}