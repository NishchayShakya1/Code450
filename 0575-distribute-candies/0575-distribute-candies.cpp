class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        int size = candyType.size()/2;
        set<int>s;
        
        for(int i=0; i<candyType.size(); i++){
            s.insert(candyType[i]);
        }
        
        int len = s.size();
      
        return min(size,len);
    }
};