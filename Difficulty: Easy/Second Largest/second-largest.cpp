class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int smaxx = -1;
        int maxx = arr[0];
        int N = arr.size();
        
        for(int i=0;i<N;i++){
            if(arr[i]>maxx){
                smaxx = maxx;
                maxx = arr[i];
            }
            else if(arr[i]<maxx && arr[i]>smaxx){
                smaxx = arr[i];
            }
        }
        
        return smaxx;
    }
};