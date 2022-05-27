class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result=0; 
        int sum=0;
        int curr = nums[0];
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            result = max(sum, result);
            if(sum<0){
                sum = 0;
            }
            curr = max(curr, nums[i]);
        }
        
        if(curr<0){
            return curr;
        }
        
        return result;
    }
};