class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        for(int i=0; i<n-1; i++){
            int index = 0;
            
            for(int j=1; j<n; j++){
                if(arr[j] < arr[index]){
                    swap(arr[j],arr[index]);
                }
                index = j;
            }
        }
    }
};