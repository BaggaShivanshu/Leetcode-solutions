// Unique Paths
class Solution {
public:
    int uniquePaths(int m, int n) {
        
        // we need m+n-2Cm-2 :3
        
        m--;
        n--;
        
        int  bigger = max(m,n);
        int  smaller= min(m,n);
        long long  numerator=1;
        for(int i=m+n; i > bigger  ; i--)
            numerator*=i;
        
        long long  denominator = 1;
        for(int i= smaller; i>=1; i--)
            denominator*=i;
        return numerator/denominator;
        
        
    }
};