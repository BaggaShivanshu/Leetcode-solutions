//  Course Schedule II
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

void dfs( vector<vector<int>>& adjacencyList, vector<bool> &visited, int x, vector<int> &ans)
{
    visited[x]=true;
    for(int i=0 ; i< adjacencyList[x].size(); i++)
    {
        if(!visited[adjacencyList[x][i]])
            dfs(adjacencyList, visited, adjacencyList[x][i], ans);
    }
    ans.push_back(x);
    
    
}
void print( vector<vector<int>>& adjacencyList)
{
    for(int i=0;i<adjacencyList.size();i++)
    {
        std::cout<<i<<" -> ";
        for(int j=0; j<adjacencyList[i].size();j++)
            std::cout<<adjacencyList[i][j]<<" ";
        std::cout<<"\n";
    }
}
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        /// first create a list.
         std::vector<int> ans;
        
        std::vector<std::vector<int> > adjacencyList(numCourses, std::vector<int>());
        
        for(int i=0;i<prerequisites.size();i++)
        {
            std::vector<int> temp = prerequisites[i];
            int start = temp[1];
            int end = temp[0];
            adjacencyList[start].push_back(end);
        }
        
        if(isCyclic(adjacencyList))
            return ans;
        
        std::vector<bool> visited(numCourses, false);
        
        print(adjacencyList);
       
        for(int i = 0 ; i< adjacencyList.size();i++ )
        {
           if(!visited[i])
               dfs(adjacencyList, visited, i, ans);
        }
        
       
        std::reverse(ans.begin(), ans.end());
        return ans;
        
        
        
    }
};