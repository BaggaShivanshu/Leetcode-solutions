// Last Stone Weight
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::priority_queue<int> mypq;
        for(int i=0;i<stones.size();i++)
            mypq.push(stones[i]);

        while(!mypq.empty())
        {
            int first = mypq.top();
            mypq.pop();
            if(mypq.empty())
                return first;
            int second = mypq.top();
            mypq.pop();
            
            if(first==second)
                continue;
            else
                mypq.push(abs(first-second));
        }
        return 0;
        
    }
};