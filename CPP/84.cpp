//  Largest Rectangle in Histogram
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        std::stack<int> s;
        
        int length = heights.size();
        
        int i=0;
        int ans =0;
        int area =0;
        
        while(i < length)
        {
            if(s.empty() || heights[s.top()] <= heights[i])
            {
                s.push(i);
                i++;
            }
            else
            {
                int top = s.top();
                s.pop();
                area = s.empty() ? heights[top] * i : heights[top] * (i-s.top()-1);
                ans = max(area, ans);
            }
        }
        
        while(!s.empty())
        {
            int top = s.top();
            s.pop();
            area = s.empty() ? heights[top] * i : heights[top] * (i-s.top()-1);
            ans = max(area, ans);
        }
        return ans;
        
    }
};