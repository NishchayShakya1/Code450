class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return 0;
        if(x==1)
            return 1;
        long long num=(long long)x;
        long long result;
        long long left=1,right=x/2;
        while(left<=right)
        {
            long long mid=(left+right)/2;
            if(mid*mid==num)
            {
                result=mid;
                break;
            }
            if(mid*mid>num)
                right=mid-1;
            else
            {
                result=mid;
                left=mid+1;
            }
        }
        return result;
    }
};