// Sliding window maximum
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
                std::vector<int> ans;

        if(nums.size()<=0)
            return ans;
            
        
        
        std::priority_queue<std::pair<int, int> > mypq; // we will store nums[i] and i;
        int i;
        for(i=0;i<k;i++) // first window
            mypq.push(make_pair(nums[i], i));
        
        for(; i<nums.size();i++)
        {
            int start = i-k;
            int end = i;
            
            while(mypq.top().second< start)
                mypq.pop();
            std::pair<int, int> topElement= mypq.top();
            int topIndex = topElement.second;
            int topValue = topElement.first;
            ans.push_back(topValue);
            mypq.push(make_pair(nums[i], i));
        }
         while(mypq.top().second< nums.size()-k)
                mypq.pop();
         ans.push_back(mypq.top().first);
        return ans;
        
    }
};