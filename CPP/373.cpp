// Find K Pairs with Smallest Sums
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        std::vector<std::vector<int> > ans;
        if(nums1.size()<1 || nums2.size()<1)
            return ans;
            
        
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        
        std::priority_queue<std::pair<int, std::pair<int, int>> , vector<std::pair<int, std::pair<int, int>>>, greater<std::pair<int, std::pair<int, int>>> >mypq; //basically it would have (sum, (i, j));
        mypq.push(make_pair(nums1[0]+nums2[0],make_pair(0,0)));
        std::set<std::pair<int, int> > setOfElementsInPq;
        setOfElementsInPq.insert(std::pair<int, int>(0,0));
        
        int n1= nums1.size();
        int n2 = nums2.size();
        for(int x = 0 ;x< min(k, n1*n2);x++)
        {
            
            std::vector<int> temp;
            std::pair<int, std::pair<int, int> > topElement = mypq.top();
            mypq.pop();
            int sum = topElement.first;
            int i = topElement.second.first;
            int j = topElement.second.second;
            std::cout<<k<<" "<<i<<" "<<j <<"\n";
            if(j+1<nums2.size())
            if(setOfElementsInPq.count(std::pair<int, int>(i,j+1))==0)
            {
                mypq.push(make_pair(nums1[i]+nums2[j+1],make_pair(i,j+1)));
                setOfElementsInPq.insert(std::pair<int, int>(i,j+1));
            }
            if(i+1<nums1.size())
            if(setOfElementsInPq.count(std::pair<int, int>(i+1,j))==0)
            {
                mypq.push(make_pair(nums1[i+1]+nums2[j],make_pair(i+1,j)));
                setOfElementsInPq.insert(std::pair<int, int>(i+1,j));
            }
            
            temp.push_back(nums1[i]);    
            temp.push_back(nums2[j]);
            ans.push_back(temp);
        }
        return ans;
    }
};