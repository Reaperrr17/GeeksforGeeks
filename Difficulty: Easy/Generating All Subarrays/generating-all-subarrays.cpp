// User function Template for C++
class Solution {
  public:
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        // code here
        int N = arr.size();
        
        vector <vector <int>> ultimatevec;
        for(int i=0;i<N;i++){
            for(int j=i;j<N;j++){
                vector <int> vec(0);
                for(int k=i;k<=j;k++){
                    vec.push_back(arr[k]);
                }
                ultimatevec.push_back(vec);
            }
            
        }
        return ultimatevec;
    }
};