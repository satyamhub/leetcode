class Solution {
public:
    int mySqrt(int x) {
        long long i=0;

        while(i*i<x){
            i++;
            long long sqr= i*i;
            if(sqr>x) return (int)i-1;
        }
        return (int)i;
    }
};