import java.util.*;
class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int[] answer = new int[commands.length];
        List<Integer> list =new ArrayList<>();
        for(int i: array){
            list.add(i);
        }
        for(int i = 0 ; i < commands.length; i++){
            int start = commands[i][0] -1;
            int end = commands[i][1];
            int idx = commands[i][2]-1;
            List<Integer> subList = new ArrayList<>();
            for(int j = start; j < end; j++){
                subList.add(list.get(j));
            }
            Collections.sort(subList);
            answer[i] = subList.get(idx);
        }
        return answer;
    }
}