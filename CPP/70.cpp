// Climbing Stairs
class Solution {
public:
    int climbStairs(int n) {
        
        std::vector<int> v(n+1, 0);
        if(n==1)
            return 1;
        v[1]=1;
        v[2]=2;
        
        for(int i=3; i< v.size();i++)
            v[i]=v[i-1]+v[i-2];
        
        return v[n];
        
    }
};