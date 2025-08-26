
class Solution {
  public:
    bool findPair(vector<int> &nums, int x) {
        // code here
        unordered_map <int,int> mpp;
        int N = nums.size();
        for(int i=0;i<N;i++){
            mpp.emplace(nums[i],i);
        }
        for(int i=0;i<N;i++){
            if(mpp.find(x+nums[i])!=mpp.end() && mpp[x+nums[i]]!=i){
                return true;
            }
        }
        return false;
    }
};
