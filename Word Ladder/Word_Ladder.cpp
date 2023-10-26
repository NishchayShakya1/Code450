class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_map<string,int> mp;
        for(string s: wordList){
            mp[s]++;
        }
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        if(mp[beginWord] > 0) mp[beginWord]--;

        while(!q.empty()){
            string sf = q.front().first;
            int d = q.front().second;
            if(sf == endWord) return d;
            q.pop();

            for(int i = 0; i < sf.size();i++){
                string t = sf;
                for(int j = 0; j < 26; j++){
                    t[i] = 'a' + j;
                    if(mp[t] > 0){
                        q.push({t,d+1});
                        mp[t]--;
                    }
                }
            }
        }

        return 0;
    }
};