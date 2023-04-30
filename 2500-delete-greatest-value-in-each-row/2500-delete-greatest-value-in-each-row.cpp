class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        
        for(int i=0; i<grid.size(); i++){
            
            sort(grid[i].begin(), grid[i].end(), greater<int>());
            
        }
        
        int ans = 0;
        
        for(int i=0; i<grid[0].size(); i++){
            
            int mx = INT_MIN;
            
            for(int j=0; j<grid.size(); j++){
                
                mx = max(mx, grid[j][i]);
                
            }
            
            ans+=mx;
        }
        
        return ans;
    }
};