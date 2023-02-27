import java.util.*;
class Solution {
    public String[] solution(int n, int[] arr1, int[] arr2) {
        String[] answer = new String[arr1.length];
        List<String> list1 = new ArrayList<>();
        List<String> list2 = new ArrayList<>();
        for(int i = 0 ; i < arr1.length; i++){
            int number = arr1[i];
            String temp = "";
            while(number > 0){
                int modulor = number %2;
                temp = String.valueOf(modulor) + temp;
                number /= 2;
            }
            int size = temp.length();
            for(int j = size; j < n; j++){
                temp = 0 + temp;
            }
            list1.add(temp);
        }
        for(int i = 0 ; i < arr2.length; i++){
            int number = arr2[i];
            String temp = "";
            while(number > 0){
                int modulor = number %2;
                temp = String.valueOf(modulor) + temp;
                number /= 2;
            }
            int size = temp.length();
            for(int j = size; j < n; j++){
                temp = 0 + temp;
            }
            list2.add(temp);
        }
        
        for(int i = 0 ; i < arr1.length;i++){
            String a = list1.get(i);
            String b = list2.get(i);
            String temp = "";
            for(int j= 0; j < n; j++){
                if(a.charAt(j) == '1' || b.charAt(j) == '1'){
                    temp += "#";
                }
                else temp += " ";
            }
            answer[i] = temp;
        }
        return answer;
    }
}