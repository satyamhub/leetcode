/*
----Optimal---
I will do binary search all same as search in rotated sorted array 1.
if(low=mid=high) shrink the checks.
low++
high--
continue

TC:O(N/2) worst case.
TC:O(log n) avg case.
SC:O(1)

*/



class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target) return true;

            //extra edge case
            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                high--;
                low++;
                continue;
            }

            //Left Array is sorted
            if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target<=nums[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }

            }else{
                if(target>=nums[mid] && target<=nums[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};