class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int N = arr.size();
        int st=0;
        int end=N-1;
        int ans = N;
        
        while(st<=end){
            
            int mid = st+(end-st)/2;
            
            if(arr[mid]>=target){
                ans = mid;
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    }
};
