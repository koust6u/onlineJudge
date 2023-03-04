import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;


class Main {
    public static void main(String[] args)throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String string = br.readLine();
        StringBuilder sb = new StringBuilder();
        int idx = 0;
        for(int i = 0 ; i < string.length(); i++){
            if(string.charAt(i) == 'X') idx++;
            else if(string.charAt(i) == '.'){
                if(idx == 2) sb.append("BB");
                if(idx !=2  &&  idx != 0){
                    sb.delete(0,sb.length());
                    sb.append("-1");
                    break;
                }
                idx = 0;
                sb.append('.');
            }
            if(idx == 4) {
                sb.append("AAAA");
                idx = 0;
            }
        }
        if(idx == 2){
            sb.append("BB");
        }
        if(idx !=2  &&  idx != 0){
            sb.delete(0,sb.length());
            sb.append("-1");
        }
        bw.write(sb.toString());
        bw.flush();
        bw.close();
    }
}