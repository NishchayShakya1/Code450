class Solution {
public:
    int search(vector<int>& nums, int target) {
        int end = nums.size()-1;
        if(nums[0] == target){
            return 0;
        }
        
        if(nums[end] == target){
            return end;
        }
        
        int start = 0;
       
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        
        return -1;
    }
};