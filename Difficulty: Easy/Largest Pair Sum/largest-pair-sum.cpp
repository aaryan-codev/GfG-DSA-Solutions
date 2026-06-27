class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        int n = arr.size();
        
       int largest = 0;
       int seclargest =0;
       
       for(int i=0; i<n; i++){
           largest = max(largest,arr[i]);
       }
       for(int i=0; i<n; i++){
           if(arr[i] < largest){
               seclargest = max(seclargest,arr[i]);
           }
       }
       int sum = largest + seclargest;
       
       return sum;
    }
};
