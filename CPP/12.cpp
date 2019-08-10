// 	Integer to Roman 
class Solution {
public:
    string intToRoman(int x) {
        
        // 1000 = M
        // 900 = CM
        // 500 = D
        // 400 = CD
        // 100 = C
        // 90 = XC
        // 50 = L
        // 40 =XL
        // 10 = X
        // 9 = IX
        // 5 = V
        // 4 = IV
        // 1 = I
        
        string ans = "";
        int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
        string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; 
        int i=12;    
        while(x)
        {
            int div = x/num[i]; 
            x = x%num[i]; 
            
            while(div--)
                ans+=sym[i];
            i--;
        }
        return ans;
        
        
    }
};