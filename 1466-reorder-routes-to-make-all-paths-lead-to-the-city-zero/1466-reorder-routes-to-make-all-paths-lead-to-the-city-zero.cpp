class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
         int ans = 0;
        vector<vector<pair<int,int>>> adj(n);
        for(auto t: connections){
            adj[t[0]].push_back({t[1],0});
            adj[t[1]].push_back({t[0],1});
        }
        queue<int> q;
        q.push(0);
        vector<int> vis(n,0);
        vis[0] = 1;
        while(!q.empty()){
            int t = q.front();
            q.pop();
            for(auto &it: adj[t]){
                if(vis[it.first] == 0){
                    vis[it.first] = 1;
                    if(it.second == 0)
                        ans++;
                    q.push(it.first);
                }
            }
        }
        return ans;
    }
};