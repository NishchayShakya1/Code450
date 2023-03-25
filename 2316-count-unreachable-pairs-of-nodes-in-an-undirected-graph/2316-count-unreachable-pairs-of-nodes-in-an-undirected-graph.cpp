class Solution {
private:
    void dfs(vector<vector<int>>& adj, vector<bool> &vis, int curr, long long &count){
        if(vis[curr]) return ;
        vis[curr]=true;
        count++;
        for(auto neighbor: adj[curr]){
            dfs(adj,vis,neighbor,count);
        }
    }
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> vis(n,false);
        vector<long long> islands;
        long long res=0, visCount=n;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                long long count=0;
                dfs(adj,vis,i,count);
                res += count*(visCount-count);
                visCount-=count;
            }
        }
        return res;
    }
};