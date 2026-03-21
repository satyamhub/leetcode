class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        for(int num: nums){
            mpp[num]++;
            if(mpp[num]>=2){
                return true;
            }
        }
        return false;
        
    }
};