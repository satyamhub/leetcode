/*
Brute---
1. I will find the smallest string size.
2. I will check upto which its all string matches.
3. Then I will push back that char in ans string.
TC:O(N)+O(N*size of common prefix)
SC:O(1)
*/


#include<bits/stdc++.h>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1)    return strs[0];
        // string ans="";
        // int mini=INT_MAX;

        // for(int i=0; i<n; i++){
        //     if(strs[i].size()<mini){
        //         mini=strs[i].size();
        //     }
        // }
        
        int minIdx=INT_MAX;
        for(int i=1; i<n; i++){
            int idx=0;
            int j;
            for( j=0; j<strs[i].size(); j++){
                if(strs[0][idx] != strs[i][j]){
                    break;
                }
                idx++;
            }
            minIdx=min(minIdx, j);
        }
        return minIdx==INT_MAX ? "" :strs[0].substr(0, minIdx);
    }
};