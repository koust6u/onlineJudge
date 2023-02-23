import java.util.*;

class Solution {
    public int[] solution(String[] keymap, String[] targets) {
        int[] answer = new int[targets.length];
        for(int i = 0; i < targets.length; i++){ //타겟 중 1개
            int result =0;
            for(int j= 0; j < targets[i].length(); j++){ // 타켓의 문자
                List<Integer> list = new ArrayList<>();
                for(int k= 0; k < keymap.length; k++){ // keyMap 개수 비교
                    if(keymap[k].contains(String.valueOf(targets[i].charAt(j)))){
                        list.add(keymap[k].indexOf(String.valueOf(targets[i].charAt(j)))+1);
                    }
                }
                if(list.isEmpty()){
                    result = -1;
                }
                else {
                    result += Collections.min(list);
                }
            }
            answer[i] += result;
        }
        return answer;
    }
}