// Container with most water

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int ans = -1;
        
        int i = 0;
        int j = height.size()-1;
        
        while(i!=j)
        {
            
            ans = max(ans, min(height[i], height[j]) * (j-i));
            //std::cout<<i<<" "<<j<<" : "<<ans<<"\n";
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return ans;
        
    }
};