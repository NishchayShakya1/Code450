class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n=piles.size();
        int dp[n+1][k+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                dp[i][j]=dp[i-1][j];
                int sum=0;
                for(int x=1;x<=j && x<=piles[i-1].size();x++){
                    sum += piles[i-1][x-1];
                    dp[i][j]=max(dp[i][j], sum + dp[i-1][j-x]);
                }
            }
        }
        return dp[n][k];
    }
};