class Solution {
public:
    int fibo(int x){
        if(x>1){
         return fibo(x-1)+fibo(x-2);
        }
        if(x==1){
            return 1;
        }
        return 0;

    }
    int fib(int n) {
        return fibo(n);

        

        
    }
};