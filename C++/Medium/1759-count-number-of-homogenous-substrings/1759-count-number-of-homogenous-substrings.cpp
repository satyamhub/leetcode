#include<bits/stdc++.h>
class Solution {
public:
    int MOD=1e9+7;
    int countHomogenous(string s) {
        int n=s.size();    

        long long ans=0;

        long long len=1;

        for(int i=0; i<n; i++){
            if(i>0 && s[i]==s[i-1]){
                len+=1;
            }else{
                len=1;
            }
            ans+=len;
        }

        
            
        return ans%MOD;
    }
};