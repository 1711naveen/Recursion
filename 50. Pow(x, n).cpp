class Solution {
public:
    double myPow(double x, int n) {
        double ans ;
        int p = abs(n);
        if(p == 0)
            return double(1);
        
        double smallOutput = myPow(x,p/2);
        if(p%2 == 0){
            ans = smallOutput * smallOutput;
        }
        else{
            ans = x * smallOutput * smallOutput;
        }
        if(n<0)
            return 1/ans;
        return ans;
    }
};