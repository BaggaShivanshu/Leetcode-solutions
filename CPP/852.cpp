// Peak Index in a Mountain Array
int findPeakIndex(std::vector<int>& A, int left, int right)
{
    if(left<=right)
    {
        int middle = (left+right)/2;
        if(A[middle] > A[middle-1] && A[middle] > A[middle+1] )
            return middle;
        else if(A[middle] > A[middle-1]) // array is still increasing
            return findPeakIndex(A, middle, right);
        return findPeakIndex(A, left, middle);
    }
    return -1;
}

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        return findPeakIndex(A, 0, A.size()-1);
    }
};