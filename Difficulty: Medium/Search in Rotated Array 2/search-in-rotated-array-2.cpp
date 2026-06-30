class Solution {
  public:
    bool search(vector<int>& arr, int target) {
        // Code here
        int n = arr.size();
        int start=0, end=n-1, mid;
        bool ans = false;
        
        while(start <= end){
            mid = start + (end-start)/2;
            
            if(arr[mid] == target){
                ans = true;
                break;
            }
            // If there are duplicates we cant tell which side is sorted.
            // So we shrink the boundaries
            if(arr[start] == arr[mid] && arr[mid] == arr[end]){
                start++;
                end--;
            }
            // Left sorted
            else if(arr[mid] >= arr[start]){
                if(arr[start] <= target && target < arr[mid]){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }
            }
            //Right Sorted
            else{
                if(arr[mid] < target && target <= arr[end]){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
            
        }
        return ans;
    }
};