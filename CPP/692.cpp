// Top K Frequent Words
bool myComp(std::pair<std::string, int> a, std::pair<std::string, int> b)
{
    if(b.second == a.second)
        return b.first>a.first;
    return b.second< a.second;
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        std::map<std::string, int> mymap;
        for(int i=0;i<words.size();i++)
        {
            if(mymap.count(words[i])==0)
                mymap.insert(std::pair<std::string, int> (words[i], 1));
            else
                mymap[words[i]]+=1;
        }
        std::vector<std::pair<std::string, int> > v(mymap.begin(), mymap.end());
        std::sort(v.begin(), v.end(), myComp);
        std::vector<std::string> ans;
        for(int i=0;i<k;i++)
            ans.push_back(v[i].first);
        return ans;
        
        
    }
};