class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        int st=0;
        int end=n;
        int ans;
        
        while(st<=end){
            long long mid = st + (end-st)/2;
            
            if(mid*mid*mid==n){
                ans = mid;
                break;
            }
            else if(mid*mid*mid<n){
                ans = mid;
                st = mid+1;
            }
            else{
                end = mid-1;
            }
            
        }
        return ans;
    }
};