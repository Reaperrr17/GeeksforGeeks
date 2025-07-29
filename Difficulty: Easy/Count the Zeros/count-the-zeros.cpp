// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int st=0;
        int N = arr.size();
        int end = N-1;
        int firstpos = -1;
        int endpos = -1;
        
        while(st<=end){
            long long mid = (st+end)/2;
            
            if(arr[mid]==0){
                firstpos = mid;
                end = mid-1;
            }
            else if(arr[mid]==1){
                st = mid+1;
            }
        }
        
        st=0;
        end=N-1;
        while(st<=end){
            long long mid = (st+end)/2;
            
            if(arr[mid]==0){
                endpos = mid;
                st = mid+1;
            }
            else if(arr[mid]==1){
                st = mid+1;
            }
        }
        if(firstpos!=-1){
            return endpos-firstpos+1;
        }
        else{
            return 0;
        }
        
    }
};