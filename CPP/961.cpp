// N-Repeated Element in Size 2N Array
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        
        while(true)
        {
            int num = A[rand()%A.size()];
            if(count(A.begin(), A.end(), num) == A.size()/2)
                return num;
        }
        
    }
};