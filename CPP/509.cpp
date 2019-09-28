// Fibonacci Number
class Solution {
public:
    int fib(int N) {
        return N==0? 0 : N==1? 1: fib(N-1)+fib(N-2);
    }
};