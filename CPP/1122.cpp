// Relative Sort Array
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        std::sort(arr1.begin(),arr1.end());
        
        
        std::vector<int> ans;
        std::vector<int> arr3 = arr1;
        
        for(int i=0;i<arr2.size();i++)
        {
            int num = arr2[i];
            std::vector<int>::iterator low,up;
            low=std::lower_bound(arr1.begin(), arr1.end(), num);
            up=std::upper_bound(arr1.begin(), arr1.end(), num);
            int start = low-arr1.begin();
            int end = up-arr1.begin();
           
            
            for(int i=start;i<end;i++)
            {
                arr3[i]=-1;
                ans.push_back(arr1[i]);
            }
            
        }
        for(int i=0;i<arr3.size();i++)
                if(arr3[i]!=-1)
                    ans.push_back(arr3[i]);
        return ans;
        
    }
};