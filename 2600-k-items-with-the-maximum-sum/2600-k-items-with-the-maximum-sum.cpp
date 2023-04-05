class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum = 0;
       
       if(numOnes>k){
           sum += k*1;
           return sum;
       }
       else{
           k = k - numOnes;
           sum += numOnes;
       }
        
       if(numZeros>k){
           sum += k*0;
           return sum;
       }
       else{
           k = k - numZeros;
           sum += numZeros*0;
       }
        
       if(numNegOnes>k){
           sum += k*-1;
           return sum;
       }
       else{
           k = k - numNegOnes;
           sum += numNegOnes*-1;
       }
    
       return sum;
       
    }
};