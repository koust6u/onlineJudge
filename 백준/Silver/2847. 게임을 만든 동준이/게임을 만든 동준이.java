import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int number = Integer.parseInt(br.readLine());
        int answer = 0;
        int[] list =new int[number];
        for(int i = 0 ; i < number; i++){
            list[i]  = Integer.parseInt(br.readLine());
        }
        for(int i = number-1; i >= 1; i--){
            if(list[i] <= list[i-1]) {
                answer += list[i-1]- list[i]+1;
                list[i-1] = list[i]-1;
            }
        }

        BufferedWriter bw= new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write(String.valueOf(answer));
        bw.flush();
    }
}