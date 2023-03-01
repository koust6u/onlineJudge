import java.util.*;
class Solution {
    public int[] solution(int N, int[] stages) {
        int idx = 1;
        int total = stages.length;
        int[] answer = new int[N];
        List<Double> list = new ArrayList<>();
        while(idx <= N){
            int number = 0;
            for(int j = 0 ; j < stages.length; j++){
                if(idx == stages[j])number++;
            }
           
            list.add((double)number/(double)total);
            total -= number;
            if(total <= 0){
                while(idx <= N){
                    list.add(0.0);
                    idx++;
                }
            }
            idx++;
        }
        
        for(int i = 0 ; i < N; i++){
            double max = list.get(0);
            int index = 0;
            for(int j = 0 ; j < N; j++){
                if(max < list.get(j)){
                    max = list.get(j);
                    index = j;
                }
            }
            answer[i] = index+1;
            list.set(index, -1.0);
        }
        
        return answer;
    }
}