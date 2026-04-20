/*
----Brute-----
I will use Linear search and will jump 2 step each time.
TC:O(N/2)
SC:O(1)
*/

/*
------Optimal----
I will use binary Search


*/


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //Brute---
        // int n=nums.size();
        // int j=0;
        // for(int i=1; i<n-1; i=i+2){
        //     if(nums[j]!=nums[i]){
        //         return nums[j];
        //     }
        //     j=j+2;
        // }return nums[j];


        //--Optimal---
        int n=nums.size();
        int low=0;
        int high=n-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(low==mid && mid==high) return nums[mid];
            //even index and right adjacent is equal
            if(mid%2==0 && nums[mid]==nums[mid+1]) low=mid+1;

            //odd index and left adjacent is equal
            if(mid%2!=0 && nums[mid]==nums[mid-1]) low=mid+1;

            if(mid%2==0 && nums[mid]!=nums[mid+1]) high=mid;
            if(mid%2!=0 && nums[mid]!=nums[mid-1]) high=mid;

        }
       return 0;

    }
};