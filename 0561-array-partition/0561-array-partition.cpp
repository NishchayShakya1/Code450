class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum =0;
        int size =  nums.size();
      
        sort(nums.begin(), nums.end());
        
        for(int i=0;  i<size;){
           sum += nums[i];
            i = i+2;
        }
        
        return sum;
    }
};