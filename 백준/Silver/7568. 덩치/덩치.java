import java.util.ArrayList;
import java.util.Scanner;

class Main{
     static class Pair{
          private int x;
          private int y;

          Pair(int x, int y){
               this.x = x;
               this.y = y;
          }

          public int getX(){
               return x;
          }

          public int getY(){
               return y;
          }
     }

     public static void main(String[] args) {
          Scanner scanner = new Scanner(System.in);
          ArrayList<Pair>list = new ArrayList<>(201);
          int number = scanner.nextInt();
          int rank = 1;
          for(int i = 0; i < number ;i++){
               int weight= scanner.nextInt();
               int height = scanner.nextInt();
               Pair pair = new Pair(weight, height);
               list.add(pair);
          }
          for(int i = 0 ; i < number ; i++){
               for(int j = 0 ; j < number; j++){
                    if(list.get(i).getX() < list.get(j).getX() && list.get(i).getY() < list.get(j).getY())
                         rank++;
               }
               System.out.println(rank);
               rank = 1;
          }
     }
}