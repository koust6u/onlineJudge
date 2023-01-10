import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Vector;

public class Main {
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          int length, index;
          length = sc.nextInt();
          index  = sc.nextInt();

          Queue<Integer> queue = new LinkedList<>();
          Vector<Integer> vector = new Vector<>();

          for(int i =  1; i <= length; i++){
               queue.add(i);
          }

          while(!queue.isEmpty()){
               for(int i = 0 ; i < index-1; i++){
                    queue.add(queue.remove());
               }
               vector.add(queue.remove());
          }

          System.out.printf("<");
          for(int i = 0 ; i < vector.size(); i++){
               if(i == vector.size()-1)
                    System.out.printf("%d>", vector.get(i));
               else
                    System.out.printf("%d, ", vector.get(i));
          }
     }
}
