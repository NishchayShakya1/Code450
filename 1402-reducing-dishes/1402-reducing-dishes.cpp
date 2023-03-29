class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
         sort(satisfaction.begin(),satisfaction.end());
        int res = 0, total = 0;
        for(int i=satisfaction.size()-1;i>=0 && satisfaction[i]>-total;i--){
            total += satisfaction[i];
            cout<<total<<" ";
            res += total;
            cout<<res<<" ";
        }
        return res;
    }
};