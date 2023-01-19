import java.util.ArrayList;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [] count = new int[10];
        Integer number = sc.nextInt();
        String string = number.toString();
        for(int i = 0 ; i < string.length(); i++){
            count[Integer.parseInt(string.substring(i, i+1))]++;
        }
        int six = count[6];
        int nine = count[9];
        Integer value = six + nine;
        if(value %2 == 0){
            value /= 2;
        }
        else{
            value /= 2;
            value += 1;
        }
        count[6] = count[9] = value;
        int max = 0;
        for(int i = 0; i < 10; i++){
            if(count[i] > max) max = count[i];
        }
        System.out.println(max);
        sc.close();
    }
}