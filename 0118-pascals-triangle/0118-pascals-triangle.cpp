class Solution {
public:
    vector<vector<int>>result;
    vector<vector<int>> generate(int numRows) {
        for(int i=0; i<numRows; i++){
            vector<int>rows(i+1, 1);
            for(int j=1; j<i; j++){
                rows[j] = result[i-1][j] + result[i-1][j-1];
            }
            result.push_back(rows);
        }
        
        return result;
    }
};