class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long sum = 0;
        long long n = arr.size() + 1;
        // sum of array elements
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
        }
        // Sum of 1 to n numbers
        long long ans = n*(n+1)/2;
        
        return ans-sum;
        
    }
};