class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        while(n<2){
            return n;
        }
        int start=0, end=n-1, mid;
        int ans=-1;
        while(start <= end){
            mid = start + (end-start)/2;
            
            if(mid*mid == n){
                ans = mid;
                break;
            }
            else if(mid*mid > n){
                end = mid - 1;
            }
            else{
                start = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};