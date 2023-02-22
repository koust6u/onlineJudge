import java.util.*;
class Solution {
    public int solution(int[] nums) {
        HashSet<Integer> s = new HashSet<>();
        for(int i: nums){
            s.add(i);
        }
        return (nums.length / 2 > s.size()) ? s.size() : nums.length / 2;
    }
}