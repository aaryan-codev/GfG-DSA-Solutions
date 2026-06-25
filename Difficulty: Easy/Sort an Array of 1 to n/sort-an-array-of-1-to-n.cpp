class Solution {
  public:
    vector<int> sortArray(vector<int>& arr) {
        // Code Here
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            arr[i] = i+1;
        }
        return arr;
    }
};