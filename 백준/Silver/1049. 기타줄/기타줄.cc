#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int loop, company;
    cin >> loop >> company;
    int totalSum = 0;
    int minOfSet = 1001, minOfEach = 1001;
    for (int i = 0; i < company; i++) {
        int x, y;
        cin >> x >> y;
        if (minOfSet > x) minOfSet = x;
        if (minOfEach > y) minOfEach = y;
    }
    totalSum = (loop/6) * min(minOfSet, 6*minOfEach);
    totalSum += min(minOfSet, loop%6*minOfEach);
    cout << totalSum << endl;

}