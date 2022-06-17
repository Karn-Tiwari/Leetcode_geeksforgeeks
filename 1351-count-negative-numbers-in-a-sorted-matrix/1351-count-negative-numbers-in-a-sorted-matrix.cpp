class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
          int n = grid.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            int m = grid[i].size();
            for(int j=m-1;j>=0;j--)
            {
                if(grid[i][j]<0)
                    c++;
            }
        }
        return c;
    }
};