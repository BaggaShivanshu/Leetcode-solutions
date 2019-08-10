// Palindrome Number
int reverseNum(int x)
{
    int rm = 0;
    while(x)
    {
        int rem = x%10;
        x/=10;
        if(rm > INT_MAX/10 || (rm == INT_MAX && rm%10 > 7))
            return -1;
        rm = rm*10+rem;
    }
    return rm;
}
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        
        int reverse = reverseNum(x);
        return x==reverse;
        
    }
};