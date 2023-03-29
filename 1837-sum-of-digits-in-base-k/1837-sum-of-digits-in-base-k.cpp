class Solution {
public:
    int sumBase(int n, int k) {
        
        string sol;
        
        while(n>0){
            int reminder = n%k;
            sol += to_string(reminder);
            n = n/k;
        }
        
        int ans = 0;
        for(int i=0; i<sol.size(); i++){
            ans += int(sol[i]-'0');
        }
        
        return ans;
    }
};