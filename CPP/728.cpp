// Self Dividing Numbers
bool isSelfDividing(int num)
{
    int originalNum = num;
    while(num)
    {
        int lastDigit = num%10;
        num/=10;
        if(lastDigit==0)
            return false;
        if(originalNum%lastDigit !=0)
            return false;
    }
    return true;
}

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        std::vector<int> ans;
        for(int num=left; num<=right; num++)
        {
            if(isSelfDividing(num))
                ans.push_back(num);
        }
        return ans;
        
    }
};