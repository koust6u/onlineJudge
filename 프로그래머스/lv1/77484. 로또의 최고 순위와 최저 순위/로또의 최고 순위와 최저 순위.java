import java.util.*;
class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        int[] answer = new int[2];
        List<Integer> real_lotto = new ArrayList<>();
        for(int i = 0 ; i < 6; i++){
            real_lotto.add(win_nums[i]);
        }
        int min = 0, max = 0;
        for(int i = 0 ; i < 6; i++){
            if(real_lotto.contains(lottos[i])) min++;
            if(lottos[i] == 0) max++;
        }
        max = 7-(max+min);
        min = 7-min;
        answer[0] = max>6? 6:max;
        answer[1] = min>6? 6:min;
        
        return answer;
    }
}