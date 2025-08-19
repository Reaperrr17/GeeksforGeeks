// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
        // code here
        unordered_map <int,int> mpp;
        int N = arr.size();
        for(int i=0;i<N;i++){
            mpp.emplace(arr[i],i);
        }
        
        if(x==0){
            if(mpp.find(0)!=mpp.end()){
                return true;
            }else{
                return false;
            }
        }else{
            for(int i=0;i<N;i++){
                if(arr[i]==0){
                    continue;
                }
                if(mpp.find(x/arr[i])!=mpp.end() && mpp[x/arr[i]]!=i &&  ((long long)(mpp.find(x/arr[i]))->first)*arr[i]==x){
                    return true;
                }
            }
            return false;
        }
        
    }
};