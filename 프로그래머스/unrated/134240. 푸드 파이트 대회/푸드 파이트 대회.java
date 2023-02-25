import java.util.*;
class Solution {
    public String solution(int[] food) {
        String answer = "";
        String a ="";
        for(int i = 1 ; i < food.length; i++){
            for(int j= 0; j < food[i]/2; j++){
                a += String.valueOf(i);
            }
        }
        StringBuffer temp = new StringBuffer(a);
        String b = temp.reverse().toString();
        answer = a+ "0"+ b;
        return answer;
    }
}