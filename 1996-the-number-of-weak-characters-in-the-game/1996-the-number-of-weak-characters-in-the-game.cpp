class Solution {
public:
    static bool cmp(vector<int>& a,vector<int>& b){
    if(a[0]==b[0]) return a[1]>b[1];  
    // this is edge case when attacks become same 
    return a[0]<b[0];    
}

int numberOfWeakCharacters(vector<vector<int>>& prop) {
    int n=prop.size();
    
    sort(prop.begin(),prop.end(),cmp);
    
    int output=0;
    int maximum=prop[n-1][1];
    for(int i=n-2;i>=0;i--){
        if(prop[i][1]<maximum) output++;
        maximum=max(maximum,prop[i][1]);
    }
    return output;
}
};