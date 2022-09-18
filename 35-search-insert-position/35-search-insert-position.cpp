class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid = nums.size()/2;
        int s =0;
        int e = nums.size()-1;
        int flag = 0;
        
        while(s<=e){
            
            int mid = (s+e)/2;
            if (nums[mid]==target){
                flag = 1;
                return mid;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else {
                s = mid+1;
            }
        }
            
        if(flag == 0){
           mid = s;
        }
            
        return mid;
        
    }
};