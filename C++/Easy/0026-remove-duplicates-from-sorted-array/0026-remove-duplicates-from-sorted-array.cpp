class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=0;

        while(right<n && left<n){
            if(nums[left]==nums[right]){
                right++;
                continue;
            }else{
                left++;
                swap(nums[left],nums[right]);
                right++;
            }
        }
        return left+1;
    }
};