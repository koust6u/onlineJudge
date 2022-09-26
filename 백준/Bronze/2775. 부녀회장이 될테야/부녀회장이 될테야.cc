#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
    int test, k,n;
    cin >> test;
    vector<int> v;
    v.clear();
    for(int i = 0; i < test; i++){
        cin >> k >> n;
        int **matrix = new int*[k+1];
        for(int j = 0; j < k+1; j++){
            matrix[j] = new int[n];
            for(int l = 0; l < n; l++){
                if(j == 0){
                    matrix[j][l] = l+1;
                }
                else{
                    matrix[j][l] = 0;
                }
            }
            matrix[j][0] = 1;
        }

        for(int j = 1; j < k+1; j++){
            for(int l = 1; l < n; l++){
                matrix[j][l] = matrix[j-1][l] + matrix[j][l-1];
            }
        }
        v.push_back(matrix[k][n-1]);
        delete[] matrix;
    }
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i] << endl;
    }
}
