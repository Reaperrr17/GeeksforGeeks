
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        int st = 0;
        int N = arr.size();
        int end = 1;
        sort(arr.begin(),arr.end());
        
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
