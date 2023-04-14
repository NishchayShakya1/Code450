class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> set;
        for(int i=0; i<allowed.size(); i++)
        {
            set.insert(allowed[i]);
        }
        int cnt = 0;
        for(int i=0;i<words.size();i++)
        {
            bool flag = true;
            for(int j=0;j<words[i].length(); j++)
            {
                if(set.find(words[i][j]) != set.end())  continue;
                else flag = false;
            }
            if(flag == true) cnt++;
        }
        return cnt;
    }
};