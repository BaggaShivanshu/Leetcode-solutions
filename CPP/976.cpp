// Largest Perimeter Triangle
class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        std::sort(A.begin(), A.end());
        std::reverse(A.begin(),A.end());
        if(A.size()<3)
            return 0;
        
        for(int i=0;i<A.size()-2;i++)
        {
            int first = A[i];
            int second = A[i+1];
            int third = A[i+2];
            
            if(first+second> third && second+third>first && third+first>second)
                return first+second+third;
        }
        return 0;
        
    }
};