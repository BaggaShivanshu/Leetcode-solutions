// Path In Zigzag Labelled Binary Tree
class Solution {
public:
    std::vector<int> ans;
    vector<int> pathInZigZagTree(int label) {
        
        if(label <= 0)
        {
            std::reverse(ans.begin(),ans.end());
            return ans;
        }
            
        int shouldBeParent = label/2;
        ans.push_back(label);
        int a  = pow(2,(int)log2(shouldBeParent));
        int b  = pow(2,(int)log2(shouldBeParent)+1);
        
        int x = b-shouldBeParent;
        int y = a+x-1;
        pathInZigZagTree(y);
        
        return ans;
        
        
        
        
    }
};