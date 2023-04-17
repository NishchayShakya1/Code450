class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        map<string,string>mp;
        for(int i=0; i<paths.size(); i++){
            mp[paths[i][0]] == paths[i][1];
        }
        
        for(int i=0; i<paths.size(); i++){
              if(mp.find(paths[i][1])!=mp.end()){
                 continue;
              }
              else{
                  return paths[i][1];
              }
        }
        
        return 0;
    }
};