class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        vector <int> ans(0);
        int N = arr.size();
        
        for(int i=0;i<N;i++){
            while(arr[i]!=i+1){
                if(arr[i]==arr[arr[i]-1]){
                    break;
                }
                swap(arr[i],arr[arr[i]-1]);
            }
        }
        
        for(int i=0;i<N;i++){
            if(arr[i]!=i+1){
                ans.push_back(arr[i]);
                ans.push_back(i+1);
                break;
            }
        }
        
        return ans;
    }
};