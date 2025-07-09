// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int N = arr.size();
        int temp = arr[N-1];
        for(int i=N-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0] = temp;
    }
};