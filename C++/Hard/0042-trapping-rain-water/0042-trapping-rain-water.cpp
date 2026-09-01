class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        int leftMax = 0;
        int rightMax = 0;
        int total = 0;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            if (nums[left] <= nums[right]) {

                if (leftMax > nums[left]) {
                    total += leftMax - nums[left];
                } else {
                    leftMax = nums[left];
                }
                left++;
            }else{
                if(rightMax>nums[right]){
                    total+=rightMax-nums[right];
                }else{
                    rightMax=nums[right];
                }
                right--;
            }
        }
        return total;
    }
};