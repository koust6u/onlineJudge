import java.util.Scanner;

public class Main{
    static int [][] map = new int[100][100];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();
        for(int i = 0 ; i < count ; i++){
            int row = sc.nextInt();
            int col = sc.nextInt();
            for(int j = row-1 ; j < row+ 9; j++){
                for(int k = col-1; k < col+9; k++){
                    map[j][k] = 1;
                }
            }
        }
        int result = 0;
        for(int i =0; i < 100 ; i++){
            for(int j = 0; j < 100; j++){
                if(map[i][j] == 1) result++;
            }
        }
        System.out.println(result);
        sc.close();
    }
}