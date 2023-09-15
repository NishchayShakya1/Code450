class Solution {
public:
      int par[1001];
    
   
    
    int find(int a) 
    {
        if(par[a] < 0)
            return a;
        
        return par[a] = find(par[a]); 
    }
    
    
    void Union(int a, int b)
    {
        par[a] = b; // here we are making parent of a to b
    }
    
    int minCostConnectPoints(vector<vector<int>>& arr) {
        int n = arr.size(); // extract the size of array
        
    
        for(int i = 0; i < n; i++) par[i] = -1;
        
        
        vector<pair<int, pair<int, int>>> adj;
        

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int weight = abs(arr[i][0] - arr[j][0]) + 
                             abs(arr[i][1] - arr[j][1]);//manhattan distance
                
                adj.push_back({weight, {i, j}});
                
            }
        }
        
  
        sort(adj.begin(), adj.end());
        
        int sum = 0; 

        for(int i = 0; i < adj.size(); i++)
        {
            int a = find(adj[i].second.first); // first node
            int b = find(adj[i].second.second); // second node
            
            if(a != b) 
            {
                sum += adj[i].first;
                Union(a, b); 
            }
        }
        
        return sum; 
    }
};