// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int k=1;
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
    }
};