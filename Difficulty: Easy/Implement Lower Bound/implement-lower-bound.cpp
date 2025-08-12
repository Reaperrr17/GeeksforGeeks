class Solution {
  public:
    int lowerBound(vector<int>& nums, int target) {
        // code here
        int N = nums.size();
        int end = N-1;
        int st=0;
        int ans = N;
        
        while(st<=end){
            
            int mid = st + (end-st)/2;
            
            if(nums[mid]==target){
                ans = mid;
                end = mid-1;
            }
            else if(nums[mid]>target){
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
