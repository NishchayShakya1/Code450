class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int n= nums.size()-1;
        // int as = (n*(n+1))/2;
        // cout<<accumulate(nums.begin(), nums.end(), 0);
        // cout<<as;
        // return accumulate(nums.begin(), nums.end(), 0) - as;
         vector<int> cnt(nums.size(),0);
        int ind =  0;
		
		// store the cnt of each value in the cnt vector
        for(int i = 0; i<nums.size(); i++)
        {
            cnt[nums[i]]++;
        }
        
        for(int i = 0; i<cnt.size(); i++)
        {
			// if cnt[i] > 1
			// this means that element occur more than once in nums
			// we have to return i
            if(cnt[i] > 1)
            {
                ind  = i;
                break;
            }
        }
        
        return ind;
    }
};