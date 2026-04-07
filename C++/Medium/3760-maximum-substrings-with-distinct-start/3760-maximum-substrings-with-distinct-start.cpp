class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<int,int>mpp;
        int sum=0;
        for(char ch:s){
            if(mpp[ch]==0){
                sum++;
            }
            mpp[ch]++;
        }
        return sum;
        
    }
};