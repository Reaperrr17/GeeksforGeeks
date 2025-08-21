class Solution {
  public:
    bool ispossible(int maxpages,vector <int> &arr,int k){
        long long sum=0;
        int stu=1;
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]>maxpages){
                return false;
            }
            sum += arr[i];
            if(sum>maxpages){
                stu++;
                if(stu>k){
                    return false;
                }
                sum = arr[i];
            }
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size()){
            return -1;
        }else{
            int ans;
            int N = arr.size();
            int st = *(max_element(arr.begin(),arr.end()));
            int end = accumulate(arr.begin(),arr.end(),0);
            while(st<=end){
                
                int mid = st + (end-st)/2;
                
                if(ispossible(mid,arr,k)){
                    end = mid-1;
                    ans = mid;
                }else{
                    st = mid+1;
                }
            }
            
            return ans;
        }
    }
};