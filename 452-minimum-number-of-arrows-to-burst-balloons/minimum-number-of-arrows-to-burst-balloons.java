class Solution {
    public int findMinArrowShots(int[][] points) {
        Arrays.sort(points,(c,d) -> {
                if(c[0] == d[0]) return c[1] - d[1];
                else return c[0] - d[0];
        });
        int n = points.length;
        // for(int i = 0 ; i < points.length ; i++)
        // {
        //     for(int j = 0 ; j < points[0].length ; j++)
        //     {
        //         System.out.print(points[i][j] + " ");
        //     }
        //     System.out.println();
        // }
        int count = 0 , ans;
        for(int i = 0 ; i < n ; i++)
        {
            ans = points[i][1];
            while(i < n - 1 && points[i+1][0] <= ans && points[i+1][0] >= points[i][0])
            {
                ans = Math.min(points[i+1][1],ans);
                i++;
            }
            System.out.println(ans + "     " + i);
            count++;
        }
        return count;
    }
}