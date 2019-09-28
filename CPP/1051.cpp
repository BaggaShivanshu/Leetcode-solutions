// Height Checker
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        std::vector<int> original = heights;
        
        std::sort(heights.begin(), heights.end());
        
        int count=0;
        for(int i=0;i<heights.size();i++)
            if(heights[i]!=original[i])
                count++;
        return count;
        
    }
};