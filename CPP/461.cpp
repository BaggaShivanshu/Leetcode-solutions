// Hamming Distance
class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans=0;
        int num = x^y;
        while(num)
        {
            ans++;
            num&=num-1;
        }
        return ans;
        
    }
};