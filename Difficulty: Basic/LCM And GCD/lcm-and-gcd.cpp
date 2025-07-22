class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
       int n1 = a;
        int n2 = b;
        while(a!=0){
            
            int nn1 = max(a,b);
            int nn2 = min(a,b);

            a = nn1;
            b = nn2;
            
            a = a%b;
            
        }
        int gcd = b;
        int lcm = (n1*n2)/gcd;
        return {lcm,gcd};
    }
};