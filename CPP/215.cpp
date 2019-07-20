// Kth Largest Element in an Array
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        std::priority_queue<int> mypq;
        for(int i=0;i< nums.size();i++)
            mypq.push(nums[i]);
        
        int ans =0;
        while(k--)
        {
            ans = mypq.top();
            mypq.pop();
        }
        
        return ans;
        
    }
};
/* 
int partition(std::vector<int>&v, int start, int end)
{
    int x = v[end], i = start; 
    for (int j = start; j <= end - 1; j++) { 
        if (v[j] <= x) { 
            std::swap(v[i], v[j]); 
            i++; 
        } 
    } 
    std::swap(v[i], v[end]); 
    return i; 
}
int quickSelect(std::vector<int>&v, int n, int start, int end)
{
    if(start<=end)
    {
        int partitionIndex = partition(v, start, end);
        if(partitionIndex == n)
            return v[partitionIndex];
        else if(partitionIndex <n)
            return quickSelect(v,n,partitionIndex+1, end);
        else if( partitionIndex >n)
            return quickSelect(v,n,start, partitionIndex-1 );
    }
    return -1;
}
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        return quickSelect(nums, nums.size()-k, 0, nums.size()-1);
        
    }
};
*/