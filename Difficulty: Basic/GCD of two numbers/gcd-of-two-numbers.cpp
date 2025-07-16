class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        int n1 = a;
        int n2 = b;
        a = max(n1,n2);
        b = min(n1,n2);
        
        if(b==0){
            return a;
        }
        else{
            return gcd(a%b,b);
        }
    }
};
