import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int number = Integer.parseInt(br.readLine());
        String string = br.readLine();
        int result = 1;
        for(int i = 0 ; i < number; i++){
            if(string.charAt(i) == 'S') result++;
            else{
                result++;
                i++;
            }
        }
        if(result >= number){
            bw.write(String.valueOf(number));
            bw.flush();
            bw.close();
        }
        else{
            bw.write(String.valueOf(result));
            bw.flush();
            bw.close();
        }
    }
}