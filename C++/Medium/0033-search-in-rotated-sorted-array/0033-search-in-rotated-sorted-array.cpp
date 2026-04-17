/*
-----Brute---
I will linear search in the array and return the index.
TC:O(N)
SC:O(1)



----Optimal-----

*/


class Solution {
public:
    int search(vector<int>& nums, int target) {
        //-----Brute----
        // int n=nums.size();

        // for(int i=0; i<n; i++){
        //     if(nums[i]==target){
        //         return i;
        //         break;
        //     }
        // }
        // return -1;

        //---Optimal------
        int n=nums.size();
        int low=0;
        int high=n-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target) return mid;

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
        return -1;
    }
};