/*
----Brute----
I will linear search, and check if nums[i-1]<nums[i]>nums[i+1];
TC:O(N)
SC:O(1)

*/

/*
----Optimal----
I will do binary search from index 1 to 2nd last.
if peak is in right nums[mid]<nums[mid+1]--> I will low=mid+1;
if peak is in left nums[mid-1]>nums[mid] ---> i will high=mid-1;

If nums[mid-1]<nums[mid]>nums[mid+1] i will return mid;
TC:O(log N)
SC:O(1)


*/


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //---Brute----
        // int n=nums.size();

        // if(n>=2 && nums[0]>nums[1]) return 0;
        // if(n>=2 && nums[n-1]>nums[n-2]) return n-1;

        // for(int i=1; i<n-1; i++){
        //     if(nums[i-1]<nums[i] && nums[i]>nums[i+1]) return i;
        // }
        // return 0;

        //---Optimal----
        int n=nums.size();
        
        //check for 1st and last element.
        if(n>1 && nums[0]>nums[1]) return 0;
        if(n>1 && nums[n-2]<nums[n-1]) return n-1;
    
        int low=1;
        int high=n-2;

        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]) return mid;

            if(nums[mid-1]>nums[mid]) high=mid-1;
            else if(nums[mid]<nums[mid+1]) low=mid+1;
        }
       return 0;
    }
};