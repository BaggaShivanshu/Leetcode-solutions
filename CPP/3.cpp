//  Longest Substring Without Repeating Characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::map<char, int> currentChars; // we will store current characters and their position in the string.
        int ans =0;
        
        int start =0;
        int end =0;
        
        for(int i=0;i<s.length();i++)
        {
          
            char x = s[i];
            if(currentChars.count(x)!=0)
            {
                if (currentChars[x]>=start )
                {
                    start = currentChars[x]+1;
                    currentChars[x]=i;
                }
                
            }
            currentChars[x]=i;
            
            ans = max(ans, end- start+1);
            end++;
        }
        return ans;
        
    }
};