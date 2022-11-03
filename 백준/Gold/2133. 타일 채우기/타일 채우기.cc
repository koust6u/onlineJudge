#include <iostream>
using namespace std;
int DP[30] = {0};
int main(){
    int number;
    cin >> number;
    DP[0] = 1;
    DP[1] = 0;
    DP[2] = 3;
    for (int i = 4; i <= number; i = i + 2)
    {
        DP[i] = DP[i - 2] * DP[2];
        for (int j = i - 4; j >= 0; j = j - 2)
        {
            DP[i] = DP[i] + (DP[j] * 2);
        }
    }
    cout << DP[number] << endl;

}
