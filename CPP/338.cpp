// Counting Bits
class Solution {
public:
    vector<int> countBits(int num) {
        std::vector<int> v(num+1,0);
        
        int lastPowerOf2 = 0;
        
        for(int i=1;i<=num;i++)
        {
            int x = i&(i-1);
            //std::cout<<x<<"\n";
            if(!x) // this is a power of two
            {
                //std::cout<<"here";
                v[i]=1;
                lastPowerOf2 = i;
            }
            else
            {
                v[i]=v[lastPowerOf2]+v[i-lastPowerOf2];
            }
        }
        return v;
        
    }
};