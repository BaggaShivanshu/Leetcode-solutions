//  Intersection of Two Arrays
class Solution {
public:
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end() );
        
        std::vector<int>::iterator it = std::unique(nums1.begin(), nums1.end());
        std::vector<int>::iterator it2 = std::unique(nums2.begin(), nums2.end());
        
        nums1.resize( std::distance(nums1.begin(),it) );
        nums2.resize( std::distance(nums2.begin(),it2) );

        
        std::vector<int> smaller, bigger;
        if(nums1.size()> nums2.size())
        {
            smaller = nums2;
            bigger = nums1;
        }
        else
        {
            smaller=nums1;
            bigger= nums2;
        }
        
        
        std::vector<int> ans;
        for(int i=0; i<smaller.size();i++)
        {
            int num = smaller[i];
            
            std::vector<int>::iterator it = std::lower_bound(bigger.begin(), bigger.end(), num);
            int position = it-bigger.begin();
            if(position>= 0 && position < bigger.size() && bigger[position]==num)
                ans.push_back(num);
        }
        return ans;

        
    }
};