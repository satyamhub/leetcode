/*
Approach:
1. I will add the s with s, so that it contain all the rotations in it substring.
2. Then i will check the substring with stl.

TC:O(N)
SC:O(1)


*/

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;

        
        if((s+s).find(goal)!=string::npos){
            return true;
        }
        return false;
    }
};