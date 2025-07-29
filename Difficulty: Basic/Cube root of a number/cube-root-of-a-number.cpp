class Solution {
  public:
    int cubeRoot(int x) {
        // code here
         int st=0;
        int end = x;
        int ans;

        while(st<=end){
            long long mid = (st+end)/2;

            if(mid*mid*mid == x){
                return mid;
            }
            else if(mid*mid*mid<x){
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