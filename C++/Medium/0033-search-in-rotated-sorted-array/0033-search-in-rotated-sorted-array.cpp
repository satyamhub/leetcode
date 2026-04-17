/*
-----Brute---
I will linear search in the array and return the index.
TC:O(N)
SC:O(1)



----Optimal-----
I will use a binary search and if left array is sorted, 
And target is less than mid, and greater than low i will do high=mid-1;
If target is greater than mid and smaller than high i will do low = mid+1;
else high=mid-1;

TC:O(log n)
SC:O(1)
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