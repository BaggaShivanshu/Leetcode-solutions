// Top K Frequent Elements
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        std::map<int,int> mymap;
        for(int i=0;i<nums.size();i++)
        {
            if(mymap.count(nums[i])==0)
                mymap.insert ( std::pair<int,int>(nums[i],1) );
            else
                mymap[nums[i]]+=1;
        }
        std::priority_queue<std::pair<int, int> > mypq;
        
        for (std::map<int,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
            mypq.push(std::pair<int,int>(it->second, it->first));
        
        
        std::vector<int> ans;
        while(k--)
        {
            std::pair<int, int> topElement = mypq.top();
            ans.push_back(topElement.second);
            mypq.pop();
        }
        return ans;        
    }
};