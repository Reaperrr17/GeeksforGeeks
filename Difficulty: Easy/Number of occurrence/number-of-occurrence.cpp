class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int st = 0;
        int end = arr.size()-1;
        int firstindex = -1;
        int endindex = -1;
        
        while(st<=end){
            
            int mid = st + (end-st)/2;
            
            if(arr[mid]==target){
                firstindex = mid;
                end = mid-1;
            }
            else if(arr[mid]>target){
                end = mid-1;
            }
            else if(arr[mid]<target){
                st = mid+1;
            }
        }
        
        st = 0;
        end = arr.size()-1;
        
        while(st<=end){
            
            int mid = st + (end-st)/2;
            
            if(arr[mid]==target){
                endindex = mid;
                st = mid+1;
            }
            else if(arr[mid]>target){
                end = mid-1;
            }
            else if(arr[mid]<target){
                st = mid+1;
            }
        }
        
        if(firstindex==-1){
            return 0;
        }
        else{
            return endindex-firstindex+1;
        }
    }
};
