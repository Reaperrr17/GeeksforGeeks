class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int st = 0;
        int end = arr.size()-1;
        int N = arr.size();
        
        if(arr[st]<=arr[end]){
            return st;
        }
        else{
            
            while(st<=end){
                int mid = end - (end-st)/2;
                
                if(arr[mid]<=arr[(mid-1+N)%N] && arr[mid]<=arr[(mid+1)%N]){
                    return mid;
                }
                else if(arr[st]>=arr[end] && arr[mid]<=arr[st]){
                    end = mid-1;
                }
                else if(arr[st]<=arr[end] && arr[mid]>=arr[st]){
                    end = mid-1;
                }
                else{
                    st = mid+1;
                }
            }
            
            return 0;
        }
    }
};
