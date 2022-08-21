#include <iostream>
using namespace std;

int main(){
    int count;
    cin >> count;
    int **triangle = new int*[count];
    int **DP = new int*[count];
    for(int i = 0; i < count; i++){
        triangle[i]= new int[i+1];
        DP[i] = new int[i+1];
        for(int j =0 ; j <= i; j++){
            int temp;
            cin >> temp;
            triangle[i][j]= temp;
            DP[i][j] = temp;
        }
    }
    for(int i = count-2; i >= 0; i--){
        for(int j = 0; j <= i; j++){

            if(DP[i+1][j] >= DP[i+1][j+1]){
                DP[i][j] = triangle[i][j]+ DP[i+1][j];
            }
            else{
                DP[i][j] = triangle[i][j]+ DP[i+1][j+1];
            }
        }
    }
    cout << DP[0][0] << endl;
    delete[] DP;
    delete[] triangle;
}