class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        int nn1 = a;
        int nn2 = b;
        
        while(a!=0){
            int n1 = max(a,b);
            int n2 = min(a,b);
            
            a = n1;
            b = n2;
            
            a = a%b;
        }
        
        return b;
        
    }
};
