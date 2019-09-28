// Fizz Buzz
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        std::vector<std::string> ans;
        
        for(int i=1; i<=n ; i++)
        {
            std::string toPush="";
            if(i%3 ==0 || i%5==0 )
            {
                if(i%3==0)
                    toPush+="Fizz";
                if(i%5==0)
                    toPush+="Buzz";
            }
            else
                toPush+=to_string(i);
            
            ans.push_back(toPush);
        }
        return ans;
        
    }
};