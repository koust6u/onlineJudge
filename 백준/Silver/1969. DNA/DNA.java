import java.io.*;
import java.util.*;


class Main{
    private static long distance = 0;
    private static char getChar(String s){
        char[] arr = s.toCharArray();
        Arrays.sort(arr);
        List<Character> list = new ArrayList<>();
        list.add('A');
        list.add('C');
        list.add('G');
        list.add('T');
        int max = 0;
        char ret = arr[0];
        for (Character character : list) {
            int temp = 0;
            for (char c : arr) {
                if (character == c) temp++;
            }
            if (max < temp) {
                max = temp;
                ret = character;
            }
        }

        for(char c: arr){
            if(ret != c){
                distance++;
            }
        }
        return ret;
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer token = new StringTokenizer(br.readLine());
        int number = Integer.parseInt(token.nextToken());
        int length = Integer.parseInt(token.nextToken());

        String[] DNAs = new String[number];
        for(int i = 0 ; i < number; i++){
            DNAs[i] = br.readLine();
        }
        StringBuilder answer = new StringBuilder();
        for(int i = 0 ; i < length; i++){
            StringBuilder sb =new StringBuilder();
            for(int j = 0 ; j < number ; j++){
                sb.append(DNAs[j].charAt(i));
            }
            answer.append(getChar(sb.toString()));
        }
        bw.write(answer +"\n" +distance);
        bw.flush();
        bw.close();
    }
}