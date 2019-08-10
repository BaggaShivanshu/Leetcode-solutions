// Count Primes
class Solution {
public:
    int countPrimes(int n) {
        std::vector<bool> sieve(n+1, true); // everybody is a prime right now;
        sieve[0]=false;
        sieve[1]=false; // 2 and 3 are prime;
        
        for(int i =2 ; i <= n/2; i++ )
        {
            if(sieve[i])
            {
                int j=2;
                while(i*j < n)
                {
                    sieve[i*j]=false;
                    j++;
                }
                
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
            if(sieve[i])
                count++;
        return count;
        
        
    }
};