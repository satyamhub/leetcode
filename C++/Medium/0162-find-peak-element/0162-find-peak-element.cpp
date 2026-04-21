/*
----Brute----
I will linear search, and check if nums[i-1]<nums[i]>nums[i+1];
TC:O(N)
SC:O(1)

*/


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //---Brute----
        int n=nums.size();

        if(n>=2 && nums[0]>nums[1]) return 0;
        if(n>=2 && nums[n-1]>nums[n-2]) return n-1;

        for(int i=1; i<n-1; i++){
            if(nums[i-1]<nums[i] && nums[i]>nums[i+1]) return i;
        }
        return 0;
    }
};