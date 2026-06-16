/*
Approach: Optimal
1. I will first sort the strs array.
2. So that the smallest string goes at 1st and longest string goes last.
3. I will compare how many character of 1st and last string matches
4. Then I will push into the ans string if they matches.
5. From this all in between string also matches bcz of sorting.

TC:O(NlogN)+O(number of common character)
SC:O(1)



*/

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