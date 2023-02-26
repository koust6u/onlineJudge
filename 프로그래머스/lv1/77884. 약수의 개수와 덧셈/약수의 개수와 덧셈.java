class Solution {
    public int solution(int left, int right) {
        int total = 0;
        for(int i = left; i <= right; i++){
            int number=0;
            for(int j = 1; j <= i; j++){
                number += i%j == 0? 1:0;
            }
            System.out.println(number);
            total += number%2==0? i: -1*i;
        }
        return total;
    }
}