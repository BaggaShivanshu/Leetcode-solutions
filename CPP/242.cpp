// Valid Anagram
#include <vector>
class Solution {
public:
    bool isAnagram(string s, string t) {
        std::vector<int> a(26,0),b(26,0);
        
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            b[t[i]-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
                return false;
        }
        return true;
        
    }
};