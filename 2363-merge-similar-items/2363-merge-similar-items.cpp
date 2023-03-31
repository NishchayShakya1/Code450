class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        
        map<int,int>mp;
        vector<vector<int>>sol;
        
        for(int i=0; i<items1.size(); i++){
            mp[items1[i][0]] = items1[i][1];    
        }
        
        for(int i=0; i<items2.size(); i++){
            mp[items2[i][0]] += items2[i][1];
        }
        
        for(auto i:mp){
            sol.push_back({i.first, i.second});
        }
        
        return sol;
        
    }
};