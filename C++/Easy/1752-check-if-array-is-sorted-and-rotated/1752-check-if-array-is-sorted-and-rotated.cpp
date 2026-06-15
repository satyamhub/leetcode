class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int rotated=0;
        for(int i=0; i<n-1; i++){
            if(nums[i]>nums[i+1]){
                rotated++;
            }
        }

        if(rotated==0){
            if(nums[0]<=nums[n-1]) return true; 
        }
        if(rotated==1){
            if(nums[0]>=nums[n-1]) return true; 
        }

        return false;
    }
};