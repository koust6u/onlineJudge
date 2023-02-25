class Solution {
    public String solution(String s) {
        String answer = "";
        int count = 0;
        String[] arr = s.split("");
        for(String i : arr){
            count = i.isBlank()? 0: count+1;
            answer += count%2==0? i.toLowerCase(): i.toUpperCase();
        }
        return answer;
    }
}