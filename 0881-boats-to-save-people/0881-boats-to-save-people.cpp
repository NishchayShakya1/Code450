class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size()-1;
        sort(people.begin(),people.end());
        int cnt = 0, i=0;
        
        while(i<=n){
            
            if(people[i] + people[n] <= limit){
                i++;
                n--;
            }
            else{
                n--;
            }
            cnt++;
        }
        
        return cnt;
    }
};