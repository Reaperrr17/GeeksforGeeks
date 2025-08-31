class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(i>j){
                    swap(mat[i][j],mat[j][i]);
                }
            }
        }
        return mat;
    }
};