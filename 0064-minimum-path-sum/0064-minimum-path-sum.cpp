class Solution {
public:
    int minPathSum(vector<vector<int>> &grid)

    {   int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return path(grid, 0, 0, dp);
    }

    int path(vector<vector<int>> &grid, int row, int column, vector<vector<int>>&dp)
    {

        int m = grid.size();
        int n = grid[0].size();

        if (row > m - 1 || column > n - 1)
            return INT32_MAX;

        if (row == m - 1 && column == n - 1)
            return grid[row][column];

        if (dp[row][column] != -1)
            return dp[row][column];

        int  ans =  min(path(grid, row + 1, column, dp),path(grid, row, column + 1, dp));  


        return dp[row][column] = grid[row][column]+ans;
    }
};