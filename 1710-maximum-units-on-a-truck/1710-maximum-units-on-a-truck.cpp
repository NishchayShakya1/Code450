class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](auto& a, auto& b) { return b[1] < a[1];});
        int sum = 0;
        for(int i=0; i<boxTypes.size(); i++){
           if(boxTypes[i][0]<truckSize){
               truckSize = truckSize - boxTypes[i][0];
               cout<<truckSize<<endl;
               sum = sum + (boxTypes[i][0]*boxTypes[i][1]);
               cout<<sum<<endl;
           }
           else{
               sum = sum + (truckSize * boxTypes[i][1]);
               cout<<sum<<endl;
               break;
           }
        }
        
        return sum;
    }
};