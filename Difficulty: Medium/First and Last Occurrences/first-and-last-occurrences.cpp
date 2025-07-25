class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int st = 0;
        int end = arr.size()-1;
        int firstindex=-1;
        int lastindex=-1;
        
        while(st<=end){
            
            int mid = (st + (end-st)/2);
            
            if(arr[mid]==x){
                firstindex = mid;
                end = mid-1;
            }
            else if(arr[mid]>x){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        
        st = 0;
        end = arr.size()-1;
        
        while(st<=end){
            
            int mid = (st + (end-st)/2);
            
            if(arr[mid]==x){
                lastindex = mid;
                st = mid+1;
            }
            else if(arr[mid]>x){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        
        return {firstindex,lastindex};
        
        
    }
};