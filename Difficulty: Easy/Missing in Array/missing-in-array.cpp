class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int N = arr.size();
        int ans = N+1;
        for(int i=0;i<N;i++){
            while(arr[i]!=i+1){
                if(arr[i]>N){
                    break;
                }
                swap(arr[i],arr[arr[i]-1]);
            }
        }
        
        for(int i=0;i<N;i++){
            if(arr[i]!=i+1){
                ans = i+1;
                break;
            }
        }
        
        return ans;
    }
};