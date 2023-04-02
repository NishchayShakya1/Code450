class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        map<int,int>m;
        
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        
        vector<int>sol;
        set<int>ans;
        for(auto i:m){
            sol.push_back(i.second);
            ans.insert(i.second);
        }
        
        return ans.size() == sol.size()? true : false;
     
    }
};