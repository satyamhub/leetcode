#include<bits/stdc++.h>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        int mini=INT_MAX;

        for(int i=0; i<n; i++){
            if(strs[i].size()<mini){
                mini=strs[i].size();
            }
        }
        
        int ptr=0;
        int flag=1;
        while(ptr<mini){
            for(int i=0; i<n-1; i++){
                char ch1=strs[i][ptr];
                char ch2=strs[i+1][ptr];
                if(ch1!=ch2){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                ans.push_back(strs[0][ptr]);
                ptr++;
            }else{
                break;
            }

        }
        return ans;
    }
};