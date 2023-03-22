class Solution {
public:
    int strStr(string s1, string s2) 
    {
        int n1 = s1.length();
        int n2 = s2.length();
        if(n2 > n1)
            return -1;
            
        for(int i=0;i<=s1.length()-s2.length();i++)
        {
            string temp = s1.substr(i, s2.length());
            if(temp == s2)
                return i;
        }
        return -1;    
    }
};