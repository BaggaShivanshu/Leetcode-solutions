// Roman to Integer
class Solution {
public:
    int romanToInt(string s) {
    
        int ans=0;
        std::map<char,int> myMap;

        
        myMap.insert(make_pair('I',1));
        myMap.insert(make_pair('V',5));
        myMap.insert(make_pair('X',10));
        myMap.insert(make_pair('L',50));
        myMap.insert(make_pair('C',100));
        myMap.insert(make_pair('D',500));
        myMap.insert(make_pair('M',1000));
        
        for(int i=0;i<s.size();i++)
        {
            if(i!=s.size()-1 && myMap[s[i]]<myMap[s[i+1]])
            {
                ans+=(myMap[s[i+1]]-myMap[s[i]]);
                    i++;
            }
            else
                ans+=myMap[s[i]];
                
        }
        return ans;
        
    }
};