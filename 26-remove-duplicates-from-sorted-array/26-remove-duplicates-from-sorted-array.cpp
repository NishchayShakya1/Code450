class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        int i =0;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(auto p:m){
            
            nums[i++] = p.first;
        }
        return m.size();
    }
};