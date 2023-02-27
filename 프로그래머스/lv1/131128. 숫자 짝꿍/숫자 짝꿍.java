import java.util.*;
class Solution {
    public String solution(String X, String Y) {
        String answer = "";
        StringBuilder sb =new StringBuilder();
        String[] X_Array = X.split("");
        String[] Y_Array = Y.split("");
        List<String> xList = new ArrayList<>(Arrays.asList(X_Array));
        List<String> yList = new ArrayList<>(Arrays.asList(Y_Array));
        int [] xFrequency = new int[10];
        int [] yFrequency = new int[10];
        for(int i = 0 ; i < 10; i++){
            xFrequency[i] = Collections.frequency(xList,String.valueOf(i));
            yFrequency[i] = Collections.frequency(yList,String.valueOf(i));
        }
        for(int i = 9 ; i >= 0; i--){
             int count = Math.min(xFrequency[i], yFrequency[i]);
            for(int j = 0 ; j < count ; j++){
                sb.append(i);
            }
        }
        if(sb.length() == 0) return "-1";
        if(sb.charAt(0) == '0') return "0";
    
        
        return sb.toString();
    }
}