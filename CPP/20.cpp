// Valid Parentheses
class Solution {
public:
    bool isValid(string s) {
        std::stack<char> mystack;
        
        for(int i=0;i<s.size();i++)
        {
            char x = s[i];
            if(x=='(' || x=='{' || x=='[')
                mystack.push(x);
            else
            {
                if(mystack.empty())
                    return false;
                char topElement = mystack.top();
                 mystack.pop();
                if( (topElement=='{' && x=='}') || (topElement=='(' && x==')') || (topElement=='[' && x==']') )
                    continue;
                else
                    return false;
               
            }
        }
        return mystack.empty();
        
    }
};