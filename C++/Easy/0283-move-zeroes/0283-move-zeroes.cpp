class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int left=0;  //for zero tracking
        int right=0;  // for non zero tracking
        
        while(left<n && right<n){
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