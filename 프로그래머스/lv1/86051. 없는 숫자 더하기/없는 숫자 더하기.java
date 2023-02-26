import java.util.*;

class Solution {
    public int solution(int[] numbers) {
        int answer = 0;
        List<Integer> list = new ArrayList<>();
        for(int i = 0 ; i < numbers.length; i++){
            list.add(numbers[i]);
        }
        for(int i = 0 ; i <= 9 ; i++){
            answer += list.contains(i) ? 0: i;
        }
        return answer;
    }
}