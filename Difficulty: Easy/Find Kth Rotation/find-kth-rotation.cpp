class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int N = arr.size();
        int minindex;
        
        for(int i=0;i<N;i++){
            if(arr[i]<arr[(i-1+N)%N] && arr[i]<=arr[(i+1)%N]){
                minindex = i;
                break;
            }
        }
        
        return minindex;
    }
};
