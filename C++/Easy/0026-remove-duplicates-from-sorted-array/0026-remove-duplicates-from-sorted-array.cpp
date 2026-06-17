/*
Approach:
1. I will Assign two pointers left and right.
2. 'left' will point to the unique elements and 'right' will move right and find
    which element is not equal to nums[left].

3. If unique element found left++ and swap(nums[left], nums[right]);
4. right++;


TC:O(N)
SC:(1)


*/


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