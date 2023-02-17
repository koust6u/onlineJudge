class Solution {
    public String solution(String my_string) {
        StringBuffer temp = new StringBuffer(my_string);
        String answer = temp.reverse().toString();
        return answer;
    }
}