class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        
        int maximum = INT_MIN;
        int prefix = 0;
        
        for(int i=0; i<n; i++){
            
            prefix += arr[i];
            
            maximum = max(prefix,maximum);
            
            if(prefix < 0){
                prefix = 0;
            }
        }
        
        return maximum;
    }
};