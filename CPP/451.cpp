// Sort Characters By Frequency
class Solution {
public:
    string frequencySort(string s) {
        
        std::map<char, int> mymap;
        
        for(int i=0;i<s.length();i++)
        {
            if(mymap.count(s[i])==0)
                mymap.insert(std::pair<char, int> (s[i], 1));
            else
                mymap[s[i]]+=1;
        }
        
        std::priority_queue<std::pair<int, char>> mypq;
        for(std::map<char, int>::iterator it = mymap.begin(); it!=mymap.end();++it)
        {
            mypq.push(std::pair<int, char>(it->second, it->first));
        }
        std::string ans="";
        while(!mypq.empty())
        {
            std::pair<int, char> topElement = mypq.top();
            mypq.pop();
            for(int i=0;i<topElement.first;i++)
                ans+=topElement.second;
        }
        return ans;
        
    }
};