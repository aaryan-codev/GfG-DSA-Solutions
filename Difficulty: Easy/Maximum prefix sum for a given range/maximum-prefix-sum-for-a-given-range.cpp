class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,
                            vector<int>& rightIndex) {
        // code here.
        int n = arr.size();
        int p = leftIndex.size();
        
        vector<int>ans;
        
        for(int i=0; i<p; i++){
            int prefix = 0;
            int maxi = INT_MIN;
            
            for(int j = leftIndex[i]; j <= rightIndex[i]; j++){
                prefix += arr[j];
                maxi = max(prefix,maxi);
            }
            
            ans.push_back(maxi);
        }
        
        return ans;
        
    }
};