// Happy Number
int squareDigitSum(int x)
{
    int sum=0;
    while(x!=0)
    {
        int rem = x%10;
        sum+=(rem*rem);
        x/=10;
    }
    return sum;
}
class Solution {
public:
    bool isHappy(int n) {
        std::map<int, bool> mymap;
        
        while(n!=1)
        {
            mymap[n]=true;
            n = squareDigitSum(n);
            if(mymap.count(n)==1)
                return false;
        }
        return true;
        
    }
};