// Generate Parentheses
std::vector<string> ans;
void paranthesis(std::string current, int open, int n)
{
    if(current.size()==n*2 && open==0)
        ans.push_back(current);
    if(current.size()> 2*n)
        return;
    
    if(open < n)
        paranthesis(current+'(', open+1, n );
     
    if(open !=0)
        paranthesis(current+')', open-1,n);
    
    
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        ans.clear();
        paranthesis("", 0, n);
        
        return ans;
    }
};