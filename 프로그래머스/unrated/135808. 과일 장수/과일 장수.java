import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

class Solution {
    public static int solution(int k, int m, int[] score) {
        int answer = 0, length= score.length;
        Arrays.sort(score);
        List<Integer> list = new ArrayList<>();
        for(int i = 0 ; i <length; i++){
            Integer temp = score[i];
            list.add(temp);
        }
        Collections.reverse(list);
        for(int i = m; i <= length; i+=m){
            int min = k;
            for(int j = i-m; j < i;j++){
                if(min > list.get(j)){
                    min = list.get(j);
                }
            }
            answer += (min*m);
        }
        return answer;
    }
}