class Solution {
public:
    vector<vector<int>>ans;
    
    void sol(int idx, vector<int>&candidates, vector<int>&temp, int target){
        
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        
        if(target<0){
            return;
        }
        
        if(idx > candidates.size()-1){
            return;
        }
        
        sol(idx+1, candidates, temp, target);
        
        temp.push_back(candidates[idx]);
        sol(idx, candidates, temp, target-candidates[idx]);
        temp.pop_back();
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        sol(0, candidates, temp, target);
        return ans;
    }
};