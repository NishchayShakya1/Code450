class Solution {
public:
    
    int helper(vector<vector<int>>& A, int i, int j, vector<vector<int>>& dp){
   
    if(i == A.size() ){
      return 0 ;
    }
   
   
   if(dp[i][j] != -1){
     return dp[i][j] ;
   }
   
    return dp[i][j] = A[i][j] + min(helper(A, i+1,j, dp), helper(A,i+1, j+1, dp)) ;
     
     
    }
    int minimumTotal(vector<vector<int>>& triangle) {
     int n = triangle.size() ;
    
     vector<vector<int>> dp(n, vector<int>(n, -1) ) ;
    
     return helper(triangle, 0, 0, dp) ;
        
//         int sum = 0;
//         int size = triangle.size();
        
//         for(int i=0; i<size; i++){
//             sum += *min_element(triangle[i].begin(), triangle[i].end());
//         }
        
//         return sum;
    }
};