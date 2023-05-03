class Solution {
public:
    double average(vector<int>& salary) {
         double sum=0, min = 0, max = 0;
         sum = reduce(salary.begin(), salary.end(), 0.);
         min = *min_element(salary.begin(), salary.end());
         max = *max_element(salary.begin(), salary.end());
         
     
         return (sum-(min+max))/(salary.size()-2);;
    }
};