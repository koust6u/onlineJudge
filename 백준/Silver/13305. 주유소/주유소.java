import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        long[] cost = new long[n];
        long[] distance = new long[n-1];

        for(int i = 0; i < n-1; i++){
            distance[i] = sc.nextLong(); 
        }
        for(int i = 0 ; i < n; i++){
            cost[i] = sc.nextLong();
        }
        
        long answer = 0;
        long min = distance[0];
        for(int i = 0 ; i < n-1; i++){
            if(min > cost[i]) min = cost[i];
            answer += distance[i]*min;
        }

        System.out.println(answer);
    }
}