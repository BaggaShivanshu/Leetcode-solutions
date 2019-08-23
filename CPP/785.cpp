// Is Graph Bipartite?
bool dfs(int i, std::vector<int>& color, std::vector<std::vector<int> >& graph) 
{
    std::vector<int> x = graph[i];
    
    for(int j=0;j<x.size();j++)
    {
        if(color[x[j]] == color[i])
            return false;
        else if(color[x[j]]==0)
        {
            if(color[i]==1)
            {
                color[x[j]] = 2;
                if(!dfs(x[j], color, graph))
                    return false;
            }
            else
            {
                color[x[j]]=1;
                if(!dfs(x[j], color, graph))
                    return false;
            }
        }
    }
    return true;
}


class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
    
        std::vector<int> color(graph.size(), 0); // 0 is not visited.
                                                 // 1 is red color
                                                 // 2 is black color
        
        for(int i=0;i<graph.size();i++)
        {
           if(color[i]==0) // we haven't visited this node,
           {
               color[i]=1; // let's visit this fucking node
               if(!dfs(i, color, graph))
                   return false;
           }
        }
        return true;
        
    }
};