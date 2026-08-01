class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int left=0; //points at zero
        int right=0; // points at non zero

        while(left<=right && right<n){
            if(nums[left]==0 && nums[right]!=0){
                swap(nums[left], nums[right]);
            }else if(nums[left]!=0){
                left++;
                right++;
            }else{
                right++;
            }
        }
    }
};