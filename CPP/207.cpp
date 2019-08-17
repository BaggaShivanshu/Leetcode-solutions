// Course Schedule
void print( vector<vector<int>>& adjacencyList)
{
    for(int i=0;i<adjacencyList.size();i++)
    {
        for(int j=0; j<adjacencyList[i].size();j++)
            std::cout<<adjacencyList[i][j]<<" ";
    }
}
bool isCyclicUtil(vector<vector<int>>& adjacencyList, int x, vector<int>& v)
{
    v[x]=1;
    bool a = false;
    for(int j=0;j<adjacencyList[x].size();j++)
    {
        if(v[adjacencyList[x][j]]==1)
            a =  true;
        if(v[adjacencyList[x][j]]==0)
            a = a || isCyclicUtil(adjacencyList, adjacencyList[x][j], v);
    }
    v[x]=2;
    return a;
}
bool isCyclic(vector<vector<int>>& adjacencyList)
{
    std::vector<int> v(adjacencyList.size(), 0); // 0 is we haven't visited this node.
                                                 // 1 is we are processing this node.
                                                 // 2 is we have processed this node
    bool cyclic = false;
    for(int i=0;i<adjacencyList.size();i++)
    {
        if(cyclic)
            return true;
        if(v[i]==0)
            cyclic = cyclic || isCyclicUtil(adjacencyList, i, v);
    }
    return cyclic;
}
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        
       std::vector<std::vector<int> > adjacencyList(numCourses, std::vector<int>());
        
        for(int i=0;i<prerequisites.size();i++)
        {
            std::vector<int> temp = prerequisites[i];
            int start = temp[1];
            int end = temp[0];
            adjacencyList[start].push_back(end);
        }
        
        return !isCyclic(adjacencyList);
    }
};