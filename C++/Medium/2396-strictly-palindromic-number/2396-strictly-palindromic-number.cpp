#include<bits/stdc++.h>
class Solution {
public:
    string inbase(int num, int base){
        if(base==0) return "0";
        string result="";
        while(num>0){
            result+=to_string(num%base);
            num/=base;
        }
        reverse(result.begin(), result.end());
        return result;
    }

    bool isPalindrome(string s){
        int n=s.size();
        if(n==1) return true;
        int left=0;
        int right=n-1;
        while(left<right){
            if(s[left]!=s[right]){
                return false;
                break;
            }else{
            left++;
            right--;
            }
        }
        return true;
    }

    bool isStrictlyPalindromic(int n) {
        
        for(int i=2; i<=n-2; i++){
            string num=inbase(n,i);
            
            if(!isPalindrome(num)){
               return false;
            }
            
        }
        return true;
        
    }
};