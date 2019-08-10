// Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int lengthOfLastWord=0;
        int length =0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
                length = 0;
            else
                length++;
            if(length!=0)
                lengthOfLastWord=length;
        }
        return lengthOfLastWord;
        
    }
};