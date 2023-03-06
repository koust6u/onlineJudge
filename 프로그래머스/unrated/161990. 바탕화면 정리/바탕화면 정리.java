import java.util.*;
class Solution {
    public int[] solution(String[] wallpaper) {
        int[] answer = new int[4];
        List<Integer> arrX = new ArrayList<>();
        List<Integer> arrY = new ArrayList<>();
        for(int i = 0 ; i < wallpaper.length; i++){
            for(int j = 0 ; j < wallpaper[i].length(); j++){
                if(wallpaper[i].charAt(j) == '#') {
                    arrY.add(i);
                    arrX.add(j);
                }
            }
        }
        Collections.sort(arrX);
        Collections.sort(arrY);
        answer[0] = arrY.get(0);
        answer[1] = arrX.get(0);
        answer[2] = arrY.get(arrX.size()-1)+1;
        answer[3] = arrX.get(arrY.size()-1)+1;
        return answer;
    }
}