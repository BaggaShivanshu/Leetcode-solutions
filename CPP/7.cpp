// Reverse Integer
class Solution {
public:
    int reverse(int x) {
        int reversedNum=0;
        
        while(x)
        {
            int rem = x%10;
            x/=10;
            
            if (reversedNum > INT_MAX/10 || (reversedNum == INT_MAX / 10 && rem > 7)) return 0;
            if (reversedNum < INT_MIN/10 || (reversedNum == INT_MIN / 10 && rem < -8)) return 0;
            reversedNum = reversedNum*10;
            reversedNum += rem;
            
            
        }
        
        return reversedNum;
        
    }
};