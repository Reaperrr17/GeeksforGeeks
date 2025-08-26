// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> nums, long long x) {
        // code here
        int N = nums.size();
        unordered_map <int,int> mpp;
        if(x==0){
            for(int i=0;i<N;i++){
                if(nums[i]==0){
                    return true;
                }
            }
            return false;
        }else{
            for(int i=0;i<N;i++){
                mpp.emplace(nums[i],i);
            }
            for(int i=0;i<N;i++){
                if(mpp.find(x/nums[i])!=mpp.end() && mpp[x/nums[i]]!=i && ((long long)nums[i]*((mpp.find(x/nums[i]))->first))==x){
                    return true;
                }
            }
            return false;
        }
        
    }
};