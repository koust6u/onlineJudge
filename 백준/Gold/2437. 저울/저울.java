import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int number = Integer.parseInt(br.readLine());
        int[] list = new int[number];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i = 0 ; i < number; i++){
            list[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(list);
        int sum = 1;
        int idx = 0;
        while(idx < number){
            if(sum < list[idx]) break;
            else sum+= list[idx];
            idx++;
        }
        bw.write(String.valueOf(sum));
        bw.flush();
        bw.close();
    }
}