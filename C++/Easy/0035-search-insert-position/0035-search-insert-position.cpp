/*
---Brute---
Use simple linear search to find the nums[i]>=target.
if target is not present return ans=nums.size();
TC:O(N)
SC:O(1)
*/

/*
----Optimal----
Use binary Search to find the lower bound of the target.
take ans=nums.size();
then if in binary search if(nums[mid]>=target) this can be our ans,
also go to left to check.

TC:O(log base 2 N)
SC:O(1)
*/


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=n;

        while(low<=high){
            int mid=(low+high)/2;

            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};