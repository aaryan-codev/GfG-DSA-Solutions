class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        // Largest
        int largest = -1;
        for(int i=0;i<arr.size();i++){
            largest = max(largest,arr[i]);
        }
        
        // Second largest
        int second = -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i] != largest){
                second = max(second,arr[i]);;
            }
        }
        return second;
    }
};