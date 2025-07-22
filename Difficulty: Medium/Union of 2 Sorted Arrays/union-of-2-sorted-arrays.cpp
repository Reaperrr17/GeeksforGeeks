class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int size1 = a.size();
        int size2 = b.size();
        vector <int> ans;
        
        int i=0;
        int j=0;
        
        while(i<size1 && j<size2){
            if(ans.empty()==1){
                if(a[i]<b[j]){
                    ans.push_back(a[i]);
                    i++;
                }
                else if(b[j]<a[i]){
                    ans.push_back(b[j]);
                    j++;
                }
                else{
                    ans.push_back(a[i]);
                    i++;
                    j++;
                }
            }
            else{
                if(a[i]<b[j] && ans.back()!=a[i]){
                    ans.push_back(a[i]);
                    i++;
                }
                else if(b[j]<a[i] && ans.back()!=b[j]){
                    ans.push_back(b[j]);
                    j++;
                }
                else if(a[i]==b[j] && ans.back()!=a[i]){
                    ans.push_back(a[i]);
                    i++;
                    j++;
                }
                else if(a[i]<b[j] && ans.back()==a[i]){
                    i++;
                }
                else if(b[j]<a[i] && ans.back()==b[j]){
                    j++;
                }
                else if(a[i]==b[j] && ans.back()==a[i]){
                    i++;
                    j++;
                }
            }
        }
        
        while(i<size1){
            if(ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        
        while(j<size2){
            if(ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
        
        return ans;
    }
};