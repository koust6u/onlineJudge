import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();
        for(int i = 1; i <= count ;i++){
            for(int j = 0; j < i; j++){
                System.out.printf("*");
            }
            for(int j = count-i; j > 0; j--){
                System.out.printf("  ");
            }
            for(int j = 0; j < i; j++){
                System.out.printf("*");
            }
            System.out.println();
        }
        for(int i = 1 ; i < count ; i++){
            for(int j = i ; j < count; j++){
                System.out.printf("*");
            }
            for(int j= count-i; j < count; j++){
                System.out.printf("  ");
            }
            for(int j = i; j < count ; j++){
                System.out.printf("*");
            }
            System.out.println();
        }

    }
}