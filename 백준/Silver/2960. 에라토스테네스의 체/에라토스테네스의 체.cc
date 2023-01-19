#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int findMin(int* list, int count){
    for(int i = 2; i < count; i++){
        if(list[i] != 0){
            return i;
        }
    }
    return -1;
}
int main(){
    int N, K,count= 0;
    cin >> N >> K;
    int *list = new int[N+1];
    list[1] = list[0] = 0;
    for(int i = 2 ; i <= N; i++)
        list[i] = i;
    int result =0;
    bool flag = true;
    while(flag){
        int min = findMin(list, N);
        for(int i = 2; i <=N ; i++){
            if(count == K){
                flag = false;
                break;
            }
            if(list[i] % min == 0 && list[i] != 0){
                result = list[i];
                list[i] = 0;
                
                count++;
            }
        }
    }
    cout << result;
}