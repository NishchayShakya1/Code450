class Solution {
public:
    int percentageLetter(string s, char letter) {
        int res = count(s.begin(), s.end(), letter);
        cout<<res<<endl;
        int len = s.length();
        cout<<len;
        return (res*100/len);
    }
};