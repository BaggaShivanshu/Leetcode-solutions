// Unique Binary Search Trees
class Solution {
public:
    int numTrees(int num) 
    {
        std::vector<int> v(num+1,0);
    

    v[0]=1;
    v[1]=1;


    for(int i=2; i<=num; i++)
        for(int j=1; j<=i; j++)
            v[i]+=v[i-j]*v[j-1];

    return v[num];
        
    }
};