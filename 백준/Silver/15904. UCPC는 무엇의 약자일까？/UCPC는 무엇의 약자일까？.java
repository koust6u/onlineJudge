import java.util.Arrays;
import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String string = sc.nextLine();
        boolean flag = false;
        for(int i = 0 ; i < string.length(); i++){
            if(string.charAt(i) == 'U'){
                string = string.substring(i+1);
                flag = true;
                break;
            }
        }

        if(flag){
            flag = false;
            for(int i = 0 ; i < string.length(); i++){
                if(string.charAt(i) == 'C'){
                    string = string.substring(i+1);
                    flag = true;
                    break;
                }
            }
        }

        if(flag){
            flag = false;
            for(int i = 0 ; i < string.length(); i++){
                if(string.charAt(i) == 'P'){
                    string = string.substring(i+1);
                    flag = true;
                    break;
                }
            }
        }
        if(flag){
            flag = false;
            for(int i = 0 ; i < string.length(); i++){
                if(string.charAt(i) == 'C'){
                    flag = true;
                    break;
                }
            }
        }
        else flag = false;

        if(flag){
            System.out.println("I love UCPC");
        }
        else{
            System.out.println("I hate UCPC");
        }
    }
}