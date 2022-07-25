class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        int size = nums.size();
        if(size == 0){
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }
        for(int i=0; i<size; i++){
            if(target == nums[i]){
                result.push_back(i);
                break;
            }
        }
    
        for(int i=size-1; i>=0; i--){
             if(target == nums[i]){
                result.push_back(i);
                 break;
            }
        }
        
        if(result.size() == 0){
             result.push_back(-1);
             result.push_back(-1);
        }
        
        return result;
    }
};