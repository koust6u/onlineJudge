import java.util.*;
class Solution {
    public int solution(int[] d, int budget) {
        int answer = 0, totalSum = 0;
        Arrays.sort(d);
        for(int i = 0 ; i < d.length;i++){
            totalSum += d[i];
            if(totalSum <= budget){
                answer++;
            }
            else break;
        }
        return answer;
    }
}