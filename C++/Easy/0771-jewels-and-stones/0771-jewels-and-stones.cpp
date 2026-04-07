class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int>mpp;
        for(char ch:jewels){
            mpp[ch]++;
        }
        int ans=0;
        for(char ch:stones){
            if(mpp[ch]!=0){
                ans++;
            }
        }
        return ans;
    }
};