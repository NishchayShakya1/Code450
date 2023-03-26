class Solution {
public:
    vector<bool>vis;
    int target;
    int ans=-1;
    void dfs(vector<int>G[],int node,int count){

        
        if(node==target){
           ans=max(ans,count);
           return;
        }
        if(G[node].size()!=0 && !vis[node]){
            vis[node]=true;
           dfs(G,G[node][0],count+1);
        }
        else{
            return;
        }
        vis[node]=false;
    }
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<int>G[n];
        for(int i=0;i<n;i++){
            if(edges[i]!=-1){
                G[i].push_back(edges[i]);
            }
        }
        vis.resize(n,false);
        for(int i=0;i<n;i++){
            if(G[i].size()!=0){
               target=i;
               vis[i]=true;
               dfs(G,G[i][0],1);
            }
       }   
     
        return ans;
    }
    
};