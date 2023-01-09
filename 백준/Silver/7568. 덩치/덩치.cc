#include <iostream>
using namespace std;

int main(){
    int number;
    int rank = 1;
    pair <int,int> arr[50];
    cin >> number;
    for(int i =0; i < number ; i++){
        cin >> arr[i].first >> arr[i].second;
    }
    for(int i = 0 ; i < number; i++){
        for(int j = 0; j < number ; j++){
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second)
                rank++;
        }
        cout << rank << endl;
        rank = 1;
    }
}