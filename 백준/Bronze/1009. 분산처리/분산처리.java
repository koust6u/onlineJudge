import java.io.*;
import java.math.BigInteger;
import java.util.*;


class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int test = Integer.parseInt(br.readLine());
        for(int i = 0 ; i < test; i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int r = 1;
            for(int j = 0 ; j < b ; j++){
                r = (a*r)%10;
            }
            if(r == 0) r = 10;
            bw.write(r + "\n");
            bw.flush();
        }

        bw.close();
    }
}