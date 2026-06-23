class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest = -1;
        for(int i=0;i<arr.size();i++){
            largest = max(arr[i],largest);
        }
        return largest;
    }
};
