#include <iostream>                                                                              
using namespace std;                                                                             
                                                                                                 
int main(){                                                                                      
    int count,* list, *DP;                                                                       
    cin >> count;                                                                                
    list = new int[count+1];                                                                     
    DP = new int[count+1];                                                                       
    for(int i =1; i <= count; i++){                                                              
        cin >> list[i];                                                                          
    }                                                                                            
    list[0] = 0;                                                                                 
    DP[0] = 0;                                                                                   
    DP[1] = list[1];                                                                             
    DP[2] = list[1] + list[2];                                                                   
                                                                                                 
    for(int i =3; i <= count; i++ ){                                                             
        DP[i] = max(DP[i-1], max(DP[i-3]+ list[i-1]+list[i], DP[i-2] + list[i]));                
    }                                                                                            
                                                                                                 
    cout << DP[count];                                                                           
}                                                                                                