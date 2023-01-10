import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Vector;

class Main{
     static class Pair{
          private int priority;
          private boolean index;

          Pair(int x, boolean y){
               this.priority = x;
               this.index = y;
          }

          public int getPriority() {
               return priority;
          }
          public boolean getIndex(){
               return index;
          }

     }

     static void input(Queue<Pair> queue, Scanner sc){
          int size, index;
          size = sc.nextInt();
          index = sc.nextInt();
          for(int i = 0 ; i < size; i++){
               int priority;
               priority = sc.nextInt();
               if(i == index)
                    queue.add(new Pair(priority, true));

               else
                    queue.add(new Pair(priority,false));
          }
     }

     static int findMax(Queue<Pair> queue){
          int result = 0;
          for(int i = 0; i < queue.size(); i++){
               if(result < queue.peek().getPriority()) result = queue.peek().getPriority();
               queue.add(queue.remove());
          }
          return result;
     }

     static void process(Queue<Pair> queue, Vector<Integer> vector){
          int priority = 1;
          while(!queue.isEmpty()){
               int maxVal = findMax(queue);
               if(queue.peek().getPriority() == maxVal){
                    if(queue.peek().getIndex()){
                         vector.add(priority);
                         return;
                    } else{
                         priority++;
                         queue.remove();
                    }
               } else
                    queue.add(queue.remove());

          }
     }

     static void solve(){
          int cases;
          Scanner sc = new Scanner(System.in);
          cases = sc.nextInt();
          Vector<Integer> answers = new Vector<>();
          for(int i = 0 ; i < cases ; i++){
               Queue<Pair> queue =new LinkedList<>();
               input(queue, sc);
               process(queue, answers);
          }
          for(Integer i : answers){
               System.out.println(i);
          }
          sc.close();
     }
     public static void main(String[] args) {
          solve();
     }
}