// Power of Four
class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num==0)
            return false;
        long x = (long)num;
        if(x&(x-1))
            return false; //this is not even power of two.
        long n = log2(x);
        return !(n%2);
        
    }
};