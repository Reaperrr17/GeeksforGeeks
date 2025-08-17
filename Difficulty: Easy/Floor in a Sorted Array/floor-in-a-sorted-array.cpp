class Solution {
  public:
    int findFloor(vector<int>& nums, int x) {
        // code here
        int st = 0;
        int end = nums.size()-1;
        int ans = -1;
        
        while(st<=end){
            int mid = st + (end-st)/2;
            
            if(nums[mid]<=x){
                ans = mid;
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return ans;
    }
};
