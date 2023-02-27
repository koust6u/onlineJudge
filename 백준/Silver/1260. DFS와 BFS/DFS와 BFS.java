import java.io.*;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

class Main{
    private static void dfs(int[][] map , boolean[] visit, int size, int x) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write(x + " ");
        bw.flush();
        visit[x] = true;
        for(int i = 1; i <= size; i++){
            if(map[x][i] == 1 &&!visit[i]){
                dfs(map,visit, size, i);
            }
        }
    }
    private static void bfs(int[][] map ,boolean[] visit, int size, int x) throws IOException {
        Queue<Integer> queue = new LinkedList<>();
        queue.add(x);
        visit[x] = true;
        while(!queue.isEmpty()){
            int current = queue.peek();
            queue.remove();
            BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
            bw.write(current + " ");
            bw.flush();
            for(int i= 1 ;i <= size; i++){
                if(map[current][i] == 1  && !visit[i]){
                    queue.add(i);
                    visit[i] = true;
                }
            }
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int vertices = Integer.parseInt(st.nextToken());
        int edges = Integer.parseInt(st.nextToken());
        int start = Integer.parseInt(st.nextToken());

        int[][] map = new int[vertices+1][vertices+1];
        boolean[] visit = new boolean[vertices+1];

        for(int i = 0 ; i < edges; i++){
            int x, y;
            StringTokenizer st2 = new StringTokenizer(br.readLine());
            x = Integer.parseInt(st2.nextToken());
            y = Integer.parseInt(st2.nextToken());
            map[x][y] = map[y][x] = 1;
        }

        dfs(map, visit, vertices, start);
        System.out.println();
        for(int i = 0 ; i <= vertices; i++){
            visit[i] = false;
        }
        bfs(map, visit,vertices, start);
    }
}