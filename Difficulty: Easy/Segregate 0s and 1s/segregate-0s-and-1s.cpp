// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &nums) {
        // code here
        int N = nums.size();
        int st = 0;
        int end = N-1;
        
        while(st<=end){
            while(st!=N && nums[st]==0){
                st++;
            }
            while(end!=-1 && nums[end]==1){
                end--;
            }
            if(st<=end){
                swap(nums[st],nums[end]);
            }
        }
    }
};