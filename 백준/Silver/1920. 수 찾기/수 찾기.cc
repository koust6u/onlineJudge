#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int binarySearch(int *list, int value, int first, int last){
    if(first > last)
        return 0;

    int mid = (first + last)/2;

    if(value == list[mid])
        return 1;
    else if(value < list[mid]){
        return binarySearch(list, value, first, mid-1);
    }
    else{
        return binarySearch(list, value, mid+1, last);
    }
}

int main(){
    int count ,number;
    scanf("%d", &count);
    int *list = new int[count];
    for(int i = 0; i < count; i++){
        scanf("%d", &list[i]);
    }
    sort(list, list+count);
    scanf("%d", &number);
    for(int i = 0; i < number; i++){
        int temp;
        scanf("%d", &temp);
        printf("%d", binarySearch(list,temp,0, count-1));
        printf(" ");
    }
}

