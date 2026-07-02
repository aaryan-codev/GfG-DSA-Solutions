class Solution {
  public:
    vector<int> twoSum(vector<int> &arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        
        vector<int>ans;
        int start = 0, end = arr.size()-1;
        
        while(start < end){
            
            if(arr[start] + arr[end] == target){
                ans.push_back(arr[start]);
                ans.push_back(arr[end]);
                return ans;
            }
            else if(arr[start] + arr[end] < target){
                start++;
            }
            else{
                end--;
            }
        }
        return ans;
    }
};