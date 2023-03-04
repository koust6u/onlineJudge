#include <iostream>
using namespace std;

int main(){
   int number,answer = 0;
   cin >> number;
   
   while(number % 5 != 0){
       if(number < 0){
           cout << -1 << endl;
           return 0;
       }
       number -= 2;
       answer++;
   }

   cout  << answer+(number/5);

}