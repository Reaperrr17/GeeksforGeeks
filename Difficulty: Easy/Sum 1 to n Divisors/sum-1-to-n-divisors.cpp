class Solution {
  public:
    long long sumOfDivisors(long long n) {
        // Code here
        long long s=0;
        for(long long i=1;i<=n;i++){
            for(long long j=1;j<=sqrt(i);j++){
                if(i%j==0){
                    s+=j;
                    if(i/j!=j){
                        s+=i/j;
                    }
                }
            }
        }
        
        return s;
    }
};