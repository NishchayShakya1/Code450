class Solution {
public:
    int solve(vector<int> &days, int i,vector<int> &costs,vector<int> &dp){
        if(i==days.size()) return 0;

        if(dp[i]!=-1) return dp[i];

        int day1=upper_bound(days.begin()+i,days.end(),days[i])-days.begin();
        int day7=upper_bound(days.begin()+i,days.end(),days[i]+6)-days.begin();
        int day30=upper_bound(days.begin()+i,days.end(),days[i]+29)-days.begin();
        return dp[i]=min(costs[0]+solve(days,day1,costs,dp),
        min(costs[1]+solve(days,day7,costs,dp),costs[2]+solve(days,day30,costs,dp)));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size()+1,-1);
        return solve(days,0,costs,dp);
    }
};