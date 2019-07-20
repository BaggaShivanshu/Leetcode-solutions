// Kth Smallest Element in a Sorted Matrix
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        std::priority_queue<std::pair<int, std::pair<int, int>>, vector<std::pair<int, std::pair<int, int>>>, greater<std::pair<int, std::pair<int, int>>> >mypq;
        for(int i=0;i<matrix.size();i++)
        {
            mypq.push(make_pair(matrix[0][i], make_pair(0,i)));
        }
        int ans =0;
        for(int i=0;i<k;i++)
        {
            std::pair<int, std::pair<int, int> > topElement = mypq.top();
            int x = topElement.second.first;
            int y = topElement.second.second;
            int num = topElement.first;
            mypq.pop();
            
            
            if(x+1<matrix.size())
                mypq.push(make_pair(matrix[x+1][y], make_pair(x+1,y)));
            
            ans= num;
            
        }
        return ans;
        
    }
};