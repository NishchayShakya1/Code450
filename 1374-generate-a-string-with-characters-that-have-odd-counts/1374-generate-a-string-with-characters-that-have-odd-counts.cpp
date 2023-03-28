class Solution {
public:
    string generateTheString(int n) {
         if(n==1) return "a";
        string ans;
        if(n%2==0)
        {
            ans.append(n-1,'a');
            ans+='b';
        }
        else
        {
            ans.append(n-2,'a');
            ans+="bc";
        }
        return ans;
    }
};