import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();

        for(int i = count-1; i>=0; i--){
            for(int j = i; j> 0; j--){
                System.out.printf(" ");
            }
            int idx = 2*(count-i)-1;
            for(int j = 0; j < idx; j++){
                System.out.printf("*");
            }
            System.out.println();
        }
        for(int i = count-1; i >0; i--){
            for(int j =count ;j > i; j--){
                System.out.printf(" ");
            }
            int idx = 2*i-1;
            for(int j = 0 ; j < idx; j++){
                System.out.printf("*");
            }
            System.out.println();
        }
    }
}