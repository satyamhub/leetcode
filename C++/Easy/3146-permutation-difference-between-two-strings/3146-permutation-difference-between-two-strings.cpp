class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<int,int>mpp;
        int n=s.size();
        int m=t.size();

        int ans=0;
        for(int i=0; i<m; i++){
            mpp[t[i]]=i;
        }
        for(int i=0; i<n; i++){
            ans=ans+abs(mpp[s[i]]-i);
        }
        return ans;
    }
};