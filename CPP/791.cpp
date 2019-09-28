// Custom Sort String
std::map<char, int> mymap;
bool mycomp(char a, char b)
{
    if(mymap.count(a) && mymap.count(b)) // both are in S
    {
        return mymap[a]<mymap[b];
    }
    if(mymap.count(a)) // if only a is in S
        return true;
    if(mymap.count(b)) // if only b is in S
        return false;
    
    return false; // none of the character is in S
}
class Solution {
public:
    string customSortString(string S, string T) {
        
        mymap.clear();
        for(int i=0;i<S.size();i++)
            mymap.insert(make_pair(S[i], i));
            
        
        std::sort(T.begin(), T.end(), mycomp);
        return T;
        
    }
};