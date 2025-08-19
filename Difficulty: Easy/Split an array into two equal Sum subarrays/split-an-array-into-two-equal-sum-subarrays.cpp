class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int N = arr.size();
        int st = 0;
        int end = N-1;
        long long sum1 = 0;
        long long sum2 = 0;
        
        while(st<=end){
            
            if(sum1<=sum2){
                sum1 += arr[st];
                st++;
            }else{
                sum2 += arr[end];
                end--;
            }
        }
        if(sum1==sum2){
            return true;
        }
        return false;
        
        
    }
};
