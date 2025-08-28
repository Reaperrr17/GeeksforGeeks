class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int N = arr.size();
        
        for(int i=0;i<N;i++){
            while(arr[i]!=i+1){
                if(arr[i]==arr[arr[i]-1]){
                    break;
                }else{
                    swap(arr[i],arr[arr[i]-1]);
                }
            }
        }
        for(int i=0;i<N;i++){
            if(arr[i]!=i+1){
                return {arr[i],i+1};
            }
        }
        return {0};
    }
};