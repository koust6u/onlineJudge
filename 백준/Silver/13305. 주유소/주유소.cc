#include <iostream>
#include <vector>
using namespace std;

int main(){
    int number;
    cin >> number;
    int* distance = new int[number-1];
    int* cities = new int[number];
    for(int i = 0 ; i < number-1; i++){
        int x;
        cin >> x;
        distance[i] = x;
    }
    for(int i = 0 ; i < number; i++){
        int x;
        cin >> x;
        cities[i] = x;
    }

    int current = 0;
    int money = 0;
    while(current < number-1){
        for(int j = current ; j < number-1; j++){
            if(j == number-2){
                money += cities[current]*distance[j];
                current = number+1;
                break;
            }
            if(cities[current] <= cities[j]){
                money += cities[current]*distance[j];
            }
            else {
                current = j;
                break;
            }

        }
    }
    cout << money;
}