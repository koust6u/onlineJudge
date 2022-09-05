#include <iostream>
#include <vector>
using namespace std;

void input(int** matrix,int size){
    for(int i = 0; i < size; i++){
        string str;
        cin >> str;
        for(int j= 0 ; j < str.length(); j++){
            matrix[i][j] = str[j]-'0';
        }
    }
}

void DQ(int** matrix,int x, int y, int size){
    if(size == 1){
        cout << matrix[x][y];
        return;
    }
    bool onlyZero, onlyOne;
    onlyZero = onlyOne = true;

    for(int i = x; i < x+size; i++){
        for(int j = y;j < y+ size; j++){
            if(matrix[i][j] == 0) onlyOne = false;
            if(matrix[i][j] == 1) onlyZero = false;
        }
    }

    if(onlyZero){
        cout << 0;
        return;
    }
    if(onlyOne){
        cout << 1;
        return;
    }

    cout << "(";
    DQ(matrix,x,y, size/2);
    DQ(matrix,x, y+size/2, size/2);
    DQ(matrix,x + size/2 , y, size/2);
    DQ(matrix, x+size/2, y+size/2, size/2);
    cout << ")";

}
int main(){
    int number;
    cin >> number;
    int **QuadTree = new int*[number];
    for(int i = 0; i < number; i++){
        QuadTree[i] = new int[number];
    }
    input(QuadTree, number);
    DQ(QuadTree,0,0, number);
}