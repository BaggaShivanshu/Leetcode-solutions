// Reverse String
class Solution {
public:
    void reverseString(vector<char>& s) {
        if(!s.empty())
        for(int i=0;i<=(s.size()-1)/2;i++)
            std::swap(s[i], s[s.size()-1-i] );
    }
};