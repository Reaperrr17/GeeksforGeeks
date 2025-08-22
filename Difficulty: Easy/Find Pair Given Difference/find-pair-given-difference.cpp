
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        sort(arr.begin(),arr.end());
        int N = arr.size();
        
        int st = 0;
        int end = 1;
        
        while(end!=N && st<=end){
            if(arr[end]-arr[st]==x){
                return true;
            }else if(arr[end]-arr[st]>x){
                st++;
                if(st==end){
                    end++;
                }
            }else{
                end++;
            }
        }
        
        return false;
    }
};
