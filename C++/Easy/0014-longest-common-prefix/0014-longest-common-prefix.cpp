class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n=strs.size();
        int ptr=0;
        string ans;
        while(ptr<strs[0].size()){
            if(strs[0][ptr]!=strs[n-1][ptr]){
                break;
            }
            ans.push_back(strs[0][ptr]);
            ptr++;
        }
        return ans;
    }
};