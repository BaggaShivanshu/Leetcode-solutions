// Triangle
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        if(triangle.size()==0)
            return 0;
        
        for(int i=1; i< triangle.size();i++)
        {
            for(int j=0;j< triangle[i].size();j++)
            {
                //std::cout<<i<<" "<<j<<" ";
                if(j==0 )
                    triangle[i][j]+= triangle[i-1][0];
                
                else if( j== triangle[i].size()-1)
                    triangle[i][j]+= triangle[i-1][triangle[i-1].size()-1];
                else
                    triangle[i][j]+= min(triangle[i-1][j-1], triangle[i-1][j]);
            }
        }
        int mini = triangle[triangle.size()-1][0];
        for(int i=0;i< triangle[triangle.size()-1].size();i++)
            mini = min(mini, triangle[triangle.size()-1][i]);
        return mini;
        
    }
};