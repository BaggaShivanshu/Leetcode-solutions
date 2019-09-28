// Pascal's Triangle II
vector<vector<int>> generate(int numRows) {
        
        std::vector<std::vector<int> > ans;
        if(numRows==0)
            return ans;
        
        std::vector<int> temp;
        temp.push_back(1);
        ans.push_back(temp); // 1st line of triangle
        
        if(numRows==1)
            return ans;
        temp.push_back(1);
        ans.push_back(temp); // 2nd line of triangle
        
        if(numRows==2)
            return ans;
        
        for(int i=2;i<numRows; i++)
        {
            temp.clear();
            for(int j=0;j<=i; j++)
            {
                if(j==0 || j==i)
                    temp.push_back(1);
                else
                {
                    temp.push_back(ans[i-1][j-1] + ans[i-1][j]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        std::vector<std::vector<int> > traingle = generate(rowIndex+1);
        return traingle[rowIndex];
        
        
    }
};