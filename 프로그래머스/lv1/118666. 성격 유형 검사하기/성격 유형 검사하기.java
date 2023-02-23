import java.util.*;
public class Solution {
    public static String solution(String[] survey, int[] choices) {
        Map<Character, Integer> map = new HashMap<>();
        String[][] table = {{"R", "T"}, {"C","F"},{"J","M"},{"A","N"}};
        for(int i = 0; i < 4; i++) {
            for (int j = 0; j < 2; j++) {
                map.put(table[i][j].charAt(0), 0);
            }
        }
        for(int i=0; i< survey.length; i++){
            if(choices[i] < 4){
                map.replace(survey[i].charAt(0),map.get(survey[i].charAt(0)) + 4- choices[i]);
            }
            else{
                map.replace(survey[i].charAt(1),map.get(survey[i].charAt(1)) + choices[i] -4);
            }
        }
        StringBuilder answer= new StringBuilder();
        for(int i = 0 ; i < 4; i++){
            if(map.get(table[i][0].charAt(0)) <map.get(table[i][1].charAt(0)))
                answer.append(table[i][1]);
            else
                answer.append(table[i][0]);
        }
        return answer.toString();
    }
}