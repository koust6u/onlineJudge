#include <iostream>

using namespace std;

int max(int A, int B){ if(A>B) return A; return B;}
int main(){
    int W[101] = {0,};
    int V[101] = {0, };
    int number, weight;
    cin >> number >> weight;
    int **DP =new int* [number+1];
    for(int i = 0; i <=number; i++){;
        DP[i] = new int[100000];
        for(int j= 0; j< 100000; j++){
            DP[i][j] = 0;
        }
    }
    for(int i =1; i <=number; i++){
        cin >> W[i] >> V[i];
    }

    for(int i = 1; i < number+1; i++){
        for(int j= 1; j < weight+1; j++){
            if(j >= W[i])
                DP[i][j] = max(DP[i-1][j], DP[i-1][j-W[i]] + V[i]);
            else
                DP[i][j] = DP[i-1][j];
        }
    }
    cout << DP[number][weight];
}
