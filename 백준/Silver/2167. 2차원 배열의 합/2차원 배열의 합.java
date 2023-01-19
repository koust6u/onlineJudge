import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int col = sc.nextInt();
        int row = sc.nextInt();
        int [][] map = new int[col][row];
        for(int i = 0; i < col; i++){
            for(int j = 0; j < row; j++){
                map[i][j] = sc.nextInt();
            }
        }
        int count, startX, startY, distX, distY;
        count = sc.nextInt();
        for(int i = 0 ; i < count ; i++){
            int result = 0;
            startX= sc.nextInt();
            startY = sc.nextInt();
            distX = sc.nextInt();
            distY = sc.nextInt();
            for(int j = startX-1; j < distX; j++){
                for(int k = startY-1; k < distY; k++){
                    result += map[j][k];
                }
            }
            System.out.println(result);
        }
        sc.close();
    }
}