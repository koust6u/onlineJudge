import java.util.Arrays;
import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int length = sc.nextInt();
        int[][] table = new int[number][length];
        for(int i = 0 ; i < number; i++){
            for(int j = 0 ; j < length; j++){
                table[i][j] = sc.nextInt();
            }
        }
        int answer = 0;
        for(int i = 1 ; i < number; i++){
            int sum = 0;
            for(int j = 0; j < length; j++){
                sum += Math.abs(table[0][j] - table[i][j]);
            }
            if(sum > 2000) answer++;
        }

        if(answer >= number/2){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}