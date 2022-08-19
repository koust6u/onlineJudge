#include <iostream>
#include <vector>
using namespace std;

void setValue(int* list, int num){
    for(int i = 0; i < num; i++){
        int temp;
        cin >> temp;
        list[i] = temp;
    }
}
void dynamic(int idx,int value,vector<int> &v){
   if(idx+1 <= value){
       v.push_back(idx+1);
       dynamic(idx+1, value,v);
   }
   if(idx+2 <= value){
       v.push_back(idx+2);
       dynamic(idx+2, value,v);
   }
   if(idx+3 <= value){
       v.push_back(idx+3);
       dynamic(idx+3, value,v);
   }
   if(idx > value){
       return;
   }

}

int findAnswer(vector<int> &v, int value){
    int temp = 0;
    for(auto iter = v.begin(); iter != v.end(); iter++){
        if(*iter == value){
            temp++;
        }
    }
    return temp;
}

void getValue(int *list, int num){
    vector<int> repository;
    for(int i = 0; i < num; i++){
        dynamic(0,list[i],repository);
        cout << findAnswer(repository, list[i]) << endl;
        repository.clear();
    }
}
int main(){
    int num;
    int* list;
    cin >> num;
    list = new int[num];
    setValue(list, num);
    getValue(list, num);
}