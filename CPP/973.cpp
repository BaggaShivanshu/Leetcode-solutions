// K Closest Points to Origin
double calcDistFromOrigin(int x, int y)
{
    std::cout<<x*x + y*y<<" ";
    std::cout<<sqrt(x*x + y*y)<<" \n";
    return sqrt(x*x + y*y);
}
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        std::vector<std::vector<int> > ans;
        std::priority_queue<std::pair<double, std::pair<int, int>>, std::vector<std::pair<double, std::pair<int, int>>>, greater<std::pair<double, std::pair<int, int>>> > myPq;
        
        for(int i=0;i< points.size();i++)
        {
            int x = points[i][0];
            int y = points[i][1];
            
            double distance = calcDistFromOrigin(x, y);
            
            myPq.push(make_pair(distance, make_pair(x,y)));
        }
        while(K--)
        {
            std::pair<double, std::pair<int, int> > topElement = myPq.top();
            std::vector<int> temp;
            temp.push_back(topElement.second.first);
            temp.push_back(topElement.second.second);
            ans.push_back(temp);
            myPq.pop();
        }
        return ans;
    }
};