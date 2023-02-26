import java.util.*;
class Solution {
    public int[] solution(int[] numbers) {
        Set<Integer> set = new HashSet<>();
        for(int i = 0 ; i < numbers.length; i++){
            for(int j= i+1; j < numbers.length; j++){
                set.add(numbers[i]+numbers[j]);
            }
        }
        Iterator<Integer> iter = set.iterator();
        int[] answer = new int[set.size()];
        int i = 0;
        while(iter.hasNext()){
            answer[i] = iter.next();
            i++;
        }
        Arrays.sort(answer);
        return answer;
    }
}