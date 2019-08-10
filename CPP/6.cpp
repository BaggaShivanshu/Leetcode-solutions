// ZigZag Conversion
class Solution {
public:
    string convert(string s, int numRows) {
        string ans="";
        if(numRows==1)
            return s;
        int skipSize = (numRows-1)*2;
        //std::cout<<skipSize<<"\n";
        
        //int index =0;
        
        for(int i=0;i<numRows; i++)
        {
            int position = i;
            if(i==0 || i==numRows-1 )
            {
                ans+=s[position];
                while(true)
                {
                    position+=skipSize;
                    if(position >= s.size())
                        break;
                    ans+=s[position];
                }
                
                
            }
            else
            {
                ans+=s[position];
                while(true)
                {
                    position+=skipSize;
                    if(position-2*i >=s.size())
                        break;
                    ans+=(s[position-2*i]);
                   
                    if(position >= s.size())
                        break;
                    ans+=(s[position]);
                }
            }
        }
        return ans;
        
    }
};