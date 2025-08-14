class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int st=0;
        int end=m;
        
        while(st<=end){
            
            int mid = st + (end-st)/2;
            
            if(pow(mid,n)==m){
                return mid;
            }
            else if(pow(mid,n)>m){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return -1;
    }
};