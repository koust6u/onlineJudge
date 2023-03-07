import java.util.*;
class Solution {
    public int[] solution(String[] operations) {
        PriorityQueue<Integer> ordered = new PriorityQueue<>(); 
        PriorityQueue<Integer> reverse = new PriorityQueue<>(Collections.reverseOrder());
        int idx = 0;
        int input = 0;
        for(int i = 0 ; i < operations.length; i++){
            String[] strings = operations[i].split(" ");
            String op = strings[0];
            int number = Integer.parseInt(strings[1]);
            if(op.equals("I")){
                input++;
                ordered.offer(number);
                reverse.offer(number);
            }
            else if(op.equals("D")){
                idx++;
                if(number == 1 && !reverse.isEmpty()) reverse.poll();
                if(number == -1 && !ordered.isEmpty()) ordered.remove();
            
            }
            if(idx >= input){
                reverse.clear();
                ordered.clear();
                idx =0 ;
                input = 0;
            }
        }
        System.out.println(reverse.toString());
        System.out.println(ordered.toString());
        List<Integer> list = new ArrayList<>();
        while(!ordered.isEmpty()){
            Integer temp = ordered.poll();
            if(reverse.contains(temp)){
                list.add(temp);
            }
        }
        Collections.sort(list);
        if(list.isEmpty()){
            return new int[]{0,0};
        }
        return new int[]{list.get(list.size()-1), list.get(0)};
    }
}