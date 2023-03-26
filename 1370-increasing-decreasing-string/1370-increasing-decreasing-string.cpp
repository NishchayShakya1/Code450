class Solution {
public:
    string sortString(string s) {
          vector<int> v(26,0) ;
        int i , n = s.length() ;
        for(i=0;i<n;i++){
            v[s[i]-'a']++;
        }
        string ans = "" ;
        while(n>0)
        {
            for(i=0;i<26;i++){
                if(v[i]>0){
                    ans += 'a' + i;
                    v[i]-- ;
                    n-- ;
                }
            }
            for(i=25;i>=0;i--){
                if(v[i]>0){
                    ans += 'a' + i;
                    v[i]--;
                    n-- ;
                }
            }
        }
        return ans ;
    }
};