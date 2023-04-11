class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0;
        int ans = 0;
        for(auto c: s){
            if(c == 'R'){
                cnt += 1;
            }
            else{
                cnt+= -1;
            }
            
            if(cnt == 0){
                ans += 1;
            }
        }
        
        return ans;
    }
};