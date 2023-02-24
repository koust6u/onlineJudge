class Solution {
    public int solution(String t, String p) {
        int answer = 0;
        Long pValue = Long.parseLong(p);
        for(int i = 0 ; i <= t.length() - p.length(); i++){
            String temp =t.substring(i,i+p.length());
            System.out.println(temp);
            Long tValue = Long.parseLong(temp);    
            if(tValue <= pValue){
                answer++;
            }
        }
        return answer;
    }
}