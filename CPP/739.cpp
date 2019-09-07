// Daily Temperatures
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        
        std::stack<int> s;
        std::vector<int> ans(T.size(), 0);
        
        for(int i=0;i<T.size();i++)
        {
            if(s.empty() || T[s.top()] >= T[i])
                s.push(i);
            else
            {
                while(!s.empty() && T[s.top()] < T[i])
                {
                   ans[s.top()]= i-s.top();
                   s.pop();
                }
                s.push(i);
            }
        }
        return ans;
        
    }
};