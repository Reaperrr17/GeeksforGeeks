// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int m = 0;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]==1){
                break;
            }
            m++;
        }
        return m;
    }
};