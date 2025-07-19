class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        
        int bk1 = a;
        int bk2 = b;
        
        while(a!=0 && b!=0){
            
            int n1 = a;
            int n2 = b;
            a = max(n1,n2);
            b = min(n1,n2);
            
            a = a%b;
            
        }
        
        int gcd = b;
        int lcm = (bk1*bk2)/gcd;
        
        return {lcm,gcd};
    }
};