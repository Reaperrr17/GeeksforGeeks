// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
        // code here
        sort (arr.begin(),arr.end());
        int negativeindex=-1;
        int N = arr.size();
        if(x>0){
            for(int i=N-1;i>=0;i--){
                if(arr[i]<0){
                    negativeindex = i;
                    break;
                }
            }
            
            if(negativeindex!=-1){
                reverse(arr.begin(),arr.begin()+negativeindex+1);
            }
            
            int st = 0;
            int end = negativeindex;
            
            while(st<end){
                
                if(1LL * arr[st]*arr[end]==x){
                    return true;
                }else if(1LL * arr[st]*arr[end]>x){
                    end--;
                }else{
                    st++;
                }
                
            }
            
            st = negativeindex+1;
            end = N-1;
            
            while(st<end){
                
                if(1LL * arr[st]*arr[end]==x){
                    return true;
                }else if(1LL * arr[st]*arr[end]>x){
                    end--;
                }else{
                    st++;
                }
            }
            return false;
        }
        
        else if(x==0){
            for(int i=0;i<N;i++){
                if(arr[i]==0){
                    return true;
                }
            }
            return false;
        }
        else{
            for(int i=N-1;i>=0;i--){
                if(arr[i]<0){
                    negativeindex = i;
                    break;
                }
            }
            
            int firstpointer = 0;
            int secondpointer = negativeindex+1;
            
            while(firstpointer<=negativeindex && secondpointer<=N-1){
                if(1LL * arr[firstpointer]*arr[secondpointer]==x){
                    return true;
                }else if(1LL * arr[firstpointer]*arr[secondpointer]<x){
                    firstpointer++;
                }else{
                    secondpointer++;
                }
            }
            return false;
        }
    }
};