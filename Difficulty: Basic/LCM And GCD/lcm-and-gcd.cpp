class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int bk1 = a;
        int bk2 = b;
        int gcd;
        
        while(bk1!=0 && bk2!=0){
            
            int n1 = max(bk1,bk2);
            int n2 = min(bk1,bk2);
            
            bk1 = n1;
            bk2 = n2;
            
            bk1 = bk1%bk2;
    
        }
        if(bk1==0)
            gcd = bk2;
        else
            gcd = bk1;
        
        int lcm = (a*b)/gcd;
        
        return {lcm,gcd};
        
    }
};