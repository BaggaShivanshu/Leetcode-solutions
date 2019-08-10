// Trapping Rain Water

class Solution {
public:
    int trap(vector<int>& height) {
        // we are going with DP based solution.
        std::vector<int> maxLeft(height.size(), 0), maxRight(height.size(),0);
        
        for(int i=1;i<height.size();i++)
        {
            maxLeft[i]= max(maxLeft[i-1], height[i-1]);
        }
        for(int i=height.size()-2;i>=0;i--)
        {
            maxRight[i]= max(maxRight[i+1], height[i+1]);
        }
        
        int ans=0;
        
        for(int i=0;i<height.size();i++)
        {
            int temp =min(maxLeft[i], maxRight[i])-height[i];
            if(temp>=0)
                ans+=temp;
        }
        return ans;
    }
};