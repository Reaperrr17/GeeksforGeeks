class Solution {
  public:
    bool ispossible(int maxsum,vector <int> &arr,int k){
        long long sum = 0;
        int seperate = 1;
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
            if(sum>maxsum){
                seperate++;
                if(seperate>k){
                    return false;
                }
                sum = arr[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& arr, int k) {
        // code here
        int st = *(max_element(arr.begin(),arr.end()));
        int end = accumulate(arr.begin(),arr.end(),0);
        int ans;
        
        while(st<=end){
            int mid = st + (end-st)/2;
            
            if(ispossible(mid,arr,k)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
    }
};