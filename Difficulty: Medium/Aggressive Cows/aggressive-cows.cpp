class Solution {
  public:
    bool ispossible(int maximum_mindistance, vector <int> &stalls,int k){
        int numberofcowsplaced = 1;
        int currstall = stalls[0];
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-currstall>=maximum_mindistance){
                numberofcowsplaced++;
                currstall = stalls[i];
            }
        }
        if(numberofcowsplaced<k){
            return false;
        }else{
            return true;
        }
        
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        
        
        sort(stalls.begin(),stalls.end());
        int st = 1;
        int end = stalls[stalls.size()-1]-stalls[0];
        int ans;
        
        while(st<=end){
            
            int mid = st + (end-st)/2;
            
            if(ispossible(mid,stalls,k)){
                ans = mid;
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        
        return ans;
    }
};