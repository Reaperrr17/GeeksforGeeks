class Solution {
  public:
    int findFloor(vector<int>& nums, int target) {
        // code here
        int N = nums.size();
        int ans = -1;
        int st = 0;
        int end = N-1;
        
        while(st<=end){
            
            int mid = st + (end-st)/2;
            
            if(nums[mid]<=target){
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
