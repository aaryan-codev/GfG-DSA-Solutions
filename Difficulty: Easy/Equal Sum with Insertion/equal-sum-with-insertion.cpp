class Solution {
  public:
    vector<int> equalSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        vector<int>prefix(n);
        prefix[0] = arr[0];
        
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1] + arr[i];
        }
        
        vector<int>suffix(n);
        suffix[n-1] = arr[n-1];
        
        for(int i=n-2; i>=0; i--){
            suffix[i] = suffix[i+1] + arr[i];
        }
        int ans,index,flag;
        int i = 0;
        while(i<n){
            if(prefix[i] > suffix[i]){
                if(prefix[i-1] < suffix[i]){
                    ans = suffix[i] - prefix[i-1];
                    index = i+1;
                    flag = 1;
                    break;
                }
                else{
                    ans = prefix[i-1] - suffix[i];
                    index = i+1;
                    flag = 2;
                    break;
                }
            }
            i++;
        }
        return {ans,index,flag};
    }
};