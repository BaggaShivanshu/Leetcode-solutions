// Queue Reconstruction by Height
bool mycomp(std::vector<int> a, std::vector<int> b)
{
    return a[0]==b[0]? b[1]>a[1] : a[0]>b[0];
}
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        std::sort(people.begin(), people.end(), mycomp);
        std::vector<std::vector<int> > ans;
        for(int i=0;i<people.size();i++)
            ans.insert(ans.begin()+people[i][1], people[i]);
        return ans;
        
    }
};