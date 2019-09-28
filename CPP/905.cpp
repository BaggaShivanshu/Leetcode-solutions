// Sort Array By Parity
bool myComp(int x, int y)
{
    return y%2> x%2;
}
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        std::sort(A.begin(), A.end(), myComp);
        return A;
        
    }
};