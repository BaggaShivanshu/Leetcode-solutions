// Maximal Rectangle
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
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int ans =0;
        if(matrix.size()==0)
            return 0;
        
        std::vector<int> temp(matrix[0].size(), 0);
        
        
        for(int i= 0 ; i< matrix.size();i++)
        {
            for(int j=0;j < matrix[0].size();j++)
            {
                if(matrix[i][j]=='0')
                    temp[j]=0;
                else
                    temp[j]+=1;
            }
            ans = max(ans, largestRectangleArea(temp) );
        }
        return ans;
        
        
        
    }
};