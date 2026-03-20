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

    bool isPalindrom(string s){
        int n=s.size();
        int left=0;
        int right=n-1;
        while(left!=right){
            if(s[left]!=s[right]){
                return false;
            }else{
                return true;
            }
            left++;
            right--;
        }
        return false;
    }

    bool isStrictlyPalindromic(int n) {
        
        for(int i=2; i<n-2; i++){
            string num=inbase(n,i);
            cout<<num<<endl;
            if(!isPalindrom(num)){
               return false;
            }
            if(i==n-2) return true;
            
        }
        return false;
        
    }
};