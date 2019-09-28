// Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        bool carry=true;
        
        int pos = digits.size()-1;
        
        while(carry && pos >=0)
        {
            digits[pos]++;
            carry=false;
            if(digits[pos]==10)
            {
                digits[pos]=0;
                carry=true;
            }
            pos--;
        }
        if(carry)
            digits.insert(digits.begin(), 1);
        return digits;
        
    }
};