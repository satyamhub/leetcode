class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int start=-1;
        int end=-1;

        for(int i=0; i<n; i++){
            if(start!=-1 && end!=-1){
                break;
            }
            
            if(nums[i]==target && start==-1){
                start=i;
            }
            if(nums[n-i-1]==target && end==-1){
                end=n-i-1;
            }
        }

        return {start,end};
    }
};