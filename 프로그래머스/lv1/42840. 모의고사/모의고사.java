import java.util.*;
class Solution {
    //1번 {1,2,3,4,5~} 2번 {2,1,2,3,2,4,2,5 ~} 3번 {3,3,1,1,2,2,4,4,5,5} 
    public int[] solution(int[] answers) {
        int[] A = {1,2,3,4,5}; // 5
        int[] B = {2,1,2,3,2,4,2,5}; //8
        int[] C = {3,3,1,1,2,2,4,4,5,5}; //10
        int a = 0, b = 0, c= 0;
        for(int i = 0 ; i < answers.length; i++){
            int tempA = A[i%5];
            int tempB = B[i%8];
            int tempC = C[i%10];
            if(tempA == answers[i]) a++;
            if(tempB == answers[i]) b++;
            if(tempC == answers[i]) c++;
        }
        int[] temp = {a,b,c};
        int max = 0;
        List<Integer> list = new ArrayList<>();
        for(int i = 0 ; i < 3; i++){
            if(temp[i] >= max) max = temp[i];
        }
        for(int i = 0 ; i< 3; i++){
            if(temp[i] == max) list.add(i+1);
        }
        System.out.println(list.toString());
        Collections.sort(list);
        int[] answer = new int[list.size()];
        for(int i = 0 ; i < list.size(); i++){
            answer[i] = list.get(i);
        }
        return answer;
    }
}