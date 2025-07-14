class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        
        long long gcd,lcm;
        int bk1 = a, bk2 = b;
        
        while(a!=0 && b!=0){
            
            int maxoftwo = max(a,b);
            int minoftwo = min(a,b);
            
            a = maxoftwo;
            b = minoftwo;
            
            a = a%b;
            
        }
        if(a==0)
            gcd = b;
        else
            gcd = a;
            
        lcm = (bk1*bk2)/gcd;
        
        return {lcm,gcd};
        
    }
};