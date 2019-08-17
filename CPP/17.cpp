// Letter Combinations of a Phone Number
void solve(string digits, std::map<char, string> mymap, int position, string combination, std::vector<string>  & ans)
{
    if(position == digits.size())
    {
        ans.push_back(combination);
        return;
    }
    
    char current = digits[position];
    for(int i=0;i<mymap[current].size(); i++)
        solve(digits, mymap, position+1, combination+mymap[current][i], ans);        
    
}
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
         std::vector<string> ans;
        if(digits.size()==0)
            return ans;
        
        std::map<char, string> mymap;
        mymap.insert(make_pair('2',"abc"));
        mymap.insert(make_pair('3',"def"));
        mymap.insert(make_pair('4',"ghi"));
        mymap.insert(make_pair('5',"jkl"));
        mymap.insert(make_pair('6',"mno"));
        mymap.insert(make_pair('7',"pqrs"));
        mymap.insert(make_pair('8',"tuv"));
        mymap.insert(make_pair('9',"wxyz"));
        
       
        solve(digits, mymap, 0,"", ans);
        
        
        return ans;
        
        
    }
};