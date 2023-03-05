import java.io.*;
import java.util.StringTokenizer;

class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer token  = new StringTokenizer(br.readLine());
        long col, row;
        col = Long.parseLong(token.nextToken());
        row = Long.parseLong(token.nextToken());
        if(row < col){
            if(row == 5){
                bw.write("4");
                bw.flush();
            }
            else if(row < 5){
                bw.write(String.valueOf(row));
                bw.flush();
            }
            else{
                bw.write(String.valueOf(row-2));
                bw.flush();
            }
        }
        else{
            if(col == 1){
                bw.write("1");
                bw.flush();
            }
            else if(col == 2){
                if (row == 2 ) {
                    bw.write("1");
                }
                else if(row == 4 || row== 3){
                    bw.write("2");
                    bw.flush();
                }
                else if(row == 5 || row == 6){
                    bw.write("3");
                    bw.flush();
                }
                else{
                    bw.write("4");
                }
            }
            else if(col > 2){
                if(row == 5){
                    bw.write("4");
                    bw.flush();
                }
                else if(row < 5){
                    bw.write(String.valueOf(row));
                    bw.flush();
                }
                else{
                    bw.write(String.valueOf(row-2));
                    bw.flush();
                }
            }
        }
        bw.close();
    }
}