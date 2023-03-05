import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int number = Integer.parseInt(st.nextToken());
        int count = Integer.parseInt(st.nextToken());
        long[] list = new long[number];
        if(number == 0){
            bw.write("0");
            bw.flush();
            bw.close();
            return;
        }
        else if(number == 1){
            bw.write(String.valueOf(list[0]));
            bw.flush();
            bw.close();
            return;
        }
        st = new StringTokenizer(br.readLine());
        for(int i = 0 ; i < number; i++){
            list[i] =Integer.parseInt(st.nextToken());
        }
        for(int i = 0 ; i < count ; i++){
            Arrays.sort(list);
            long temp = list[0] + list[1];
            list[0] = temp;
            list[1] = temp;
        }
        long sum = 0;
        for(int i = 0 ; i < number; i++){
            sum += list[i];
        }
        bw.write(String.valueOf(sum));
        bw.flush();
        bw.close();
    }
}