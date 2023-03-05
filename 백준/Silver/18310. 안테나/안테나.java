import java.util.Arrays;
import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int[] houses = new int[number];
        for(int i = 0 ; i < number; i++){
            houses[i] = sc.nextInt();
        }
        Arrays.sort(houses);
        int answer = houses[(number-1)/2];
        System.out.println(answer);
    }
}