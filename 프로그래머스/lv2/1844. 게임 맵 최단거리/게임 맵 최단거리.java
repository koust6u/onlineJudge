import java.util.*;
class Solution {
        private void dfs(int[][] maps,int[][]dp, boolean[][] visit){
        Queue<Integer[]> queue = new LinkedList<>();
        Integer[] integers = {0,0};
        queue.add(integers);
        int[] dx = {0,0,1,-1};
        int[] dy = {1,-1,0,0};
        while(!queue.isEmpty()){
            int x = queue.peek()[0];
            int y = queue.peek()[1];
            queue.remove();
            for(int i = 0 ; i < 4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx >= 0 && nx < maps.length && ny >= 0 && ny < maps[0].length && !visit[nx][ny] && maps[nx][ny] == 1){
                    visit[nx][ny] = true;
                    dp[nx][ny] = dp[x][y] +1;
                    queue.add(new Integer[]{nx, ny});
                }
            }
        }

    }
    public int solution(int[][] maps){
        int[][] dp = new int[maps.length][maps[0].length];
        boolean[][] visit = new boolean[maps.length][maps[0].length];
        dfs(maps,dp,visit);
        if(dp[maps.length-1][maps[0].length-1] ==0) return -1;
        else return dp[maps.length-1][maps[0].length-1]+1;
    }
}