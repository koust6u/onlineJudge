import java.util.*;
class Solution {
    public int solution(int[] nums) {
        HashSet<Integer> s = new HashSet<>();
        for(int i: nums){
            s.add(i);
        }
        return Math.min(s.size(), nums.length/2);
    }
}