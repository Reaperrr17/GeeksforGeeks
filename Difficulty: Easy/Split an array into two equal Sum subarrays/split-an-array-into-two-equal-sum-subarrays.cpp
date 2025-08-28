class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int N = arr.size();
        long long sum1 = 0;
        long long sum2 = 0;
        
        int st = 0;
        int end = N-1;
        
        while(st<=end){
            if(sum1>=sum2){
                sum2 += arr[end];
                end--;
            }else{
                sum1 += arr[st];
                st++;
            }
        }
        if(sum1 == sum2){
            return true;
        }else{
            return false;
        }
    }
};
