class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        vector<int>prefix(n);
        
        prefix[0] = arr[0];
        
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1] + arr[i];
        }
        
        vector<int>ans(n);
        
        for(int i=0; i<n; i++){
            ans[i] = prefix[i]/(i+1);
        }
        
        return ans;
    }
};