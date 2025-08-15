class Solution {
  public:
    
    bool ispossible(int n,vector <int> &arr,int k){
        long long summ=0;
        int count=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>n){
                return false;
            }
            summ += arr[i];
            if(summ>n){
                count++;
                summ=0;
                summ+=arr[i];
            }
        }
        if(count>k){
            return false;
        }
        else{
            return true;
        }
    }
    
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size()){
            return -1;
        }
        else{
            long long summ = 0;
            for(int i=0;i<arr.size();i++){
                summ += arr[i];
            }
            int st=0;
            int end=summ;
            int ans;
            
            while(st<=end){
                
                int mid = st + (end-st)/2;
                
                if(ispossible(mid,arr,k)){
                    ans = mid;
                    end = mid-1;
                }
                else{
                    st = mid+1;
                }
            }
            return ans;
        }
    }
};