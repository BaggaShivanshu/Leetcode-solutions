// Combination Sum II
void findCombinations(int sum, int target, std::vector<int>& considered, std::vector<int>& candidates, int i,std::vector<std::vector<int>>& ans)
{
    if(sum == target)
    {
        ans.push_back(considered);
        return;
    }
    if(sum>target)
        return;
    
    while(i<candidates.size())
    {
        considered.push_back(candidates[i]);
        findCombinations(sum+candidates[i], target, considered, candidates, i+1, ans);
        considered.pop_back();
        i++;
    }
    return;
}
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        std::vector<std::vector<int>> ans;
        std::vector<int> temp;
        std::sort(candidates.begin(), candidates.end());
        
        findCombinations(0, target, temp, candidates, 0, ans);
        
        std::sort(ans.begin(),ans.end());
        std::vector<std::vector<int>>::iterator it;
        it = std::unique (ans.begin(), ans.end());                

        ans.resize( std::distance(ans.begin(),it) );
        
        
        return ans;
        
        
        
    }
};