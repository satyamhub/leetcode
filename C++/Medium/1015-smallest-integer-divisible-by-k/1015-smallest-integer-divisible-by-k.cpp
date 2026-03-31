#include<bits/stdc++.h>
class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int len=1;
        int n=1;
        float res=n%k;
        if(k%2==0 || k%5==0) return -1;
        while(res!=0){
            len++;
            n=(n*10+1)%k;
            res=n%k;
            if(n%k==0){
            return len;
        }
        }
        if(n%k==0){
            return len;
        }else{
            return -1;
        }
        
    }
};