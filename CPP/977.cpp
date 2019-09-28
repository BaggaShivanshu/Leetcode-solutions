// Squares of a Sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        // find the first non negative number;
        int firstNonNegativeNumber=-1;
        
        for(int i=0;i<A.size();i++)
        {
            if(A[i]>=0)
            {
                firstNonNegativeNumber = i;
                break;
            }
        }
        if(firstNonNegativeNumber==-1)
            firstNonNegativeNumber=A.size();
        std::vector<int> ans;
        
        int left = firstNonNegativeNumber-1;
        int right = left+1;
        
        while(left >=0 && right<A.size())
        {
            if(A[left]*A[left] < A[right]*A[right])
            {
                ans.push_back(A[left]*A[left]);
                left--;
            }
            else
            {
                ans.push_back(A[right]*A[right]);
                right++;
            }
        }
        
        while(left>=0)
        {
            ans.push_back(A[left]*A[left]);
            left--;
        }
        while(right<A.size())
        {
            ans.push_back(A[right]*A[right]);
            right++;
        }
        return ans;
        
    }
};