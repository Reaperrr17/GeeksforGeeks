class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        if(b==0){
            return a;
        }
        gcd(b,a%b);
        
    }
};
