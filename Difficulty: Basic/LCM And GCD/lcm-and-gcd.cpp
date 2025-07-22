class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int n = min(a,b);
        int gcd;
        for(int i=n;i>=1;i--){
            if(a%i==0 && b%i==0){
                gcd = i;
                break;
            }
        }
        int lcm = (a*b)/gcd;
        return {lcm,gcd};
    }
};