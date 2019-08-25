// Combination Sum
void findCombinationSum(int currentValue, int target, vector<int>&  candidates, vector<int>&  considerdCandidates, int i, std::vector<std::vector<int> >& ans)
{
    if(currentValue == target)
    {
        ans.push_back(considerdCandidates);
        return;
    }
    if(currentValue > target)
    {
        return;
    }
    
    while(i< candidates.size())
    {
        std::vector<int> arr = considerdCandidates;
        arr.push_back(candidates[i]);
        findCombinationSum(currentValue+candidates[i], target, candidates, arr, i, ans);
        i++;
    }
}

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        std::vector<int> temp;
        
        std::sort(candidates.begin(), candidates.end());
        
        std::vector<std::vector<int> >ans;
        findCombinationSum(0, target, candidates, temp,0, ans);
        return ans;
    }
};