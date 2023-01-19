#include <iostream>
#include <vector>
#include <list>
using namespace std;

int convert(int value){
    int result = 0;
    string str = to_string(value);
    if(str.size() == 1){
        result += value *10;
        result += value;
        return result;
    }
    else{
        int first = str[0] - 48;
        int second = str[1] - 48;
        int sum = first + second;
        string str2 = to_string(sum);
        result  += (str[1]-48) * 10;
        result  += str2[str2.size()-1] - 48;

        return result;
    }
}
int main(){
    int number;
    cin >> number;
    list <int> array;
    array.push_back(number);
    while(true){
        array.push_back(convert(array.back()));
        if(array.front() == array.back()) break;
    }
    cout << array.size()-1;
}
