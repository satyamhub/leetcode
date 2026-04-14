/*
----Brute----
I will iterate from start and will search for the target and return the index.
TC:O(N)
SC:O(1)
*/

/*
-----Better(Iterative Binary SEARCH)-----
I will use the binary search.
I will use three pointer, low, mid and high.
if(target==nums[mid]) return mid.
else if(target>nums[mid]) low=mid+1;
else :  high=mid-1;

TC:O(Log N)
SC:O(1)
*/


class Solution {
public:
    int brute(vector<int>&nums, int target){
        int n=nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }

    int better(vector<int>&nums, int target){
        int n=nums.size();
        int low=0;
        int high=n-1;

        while(low <= high){
            int mid=(low+high)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return -1;
    }


    int optimal(vector<int>nums, int low, int high, int target){
        if(low>high) return -1;
        int mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) return optimal(nums, mid+1, high, target);
        return optimal(nums, low, high-1, target);
    }

    int search(vector<int>& nums, int target) {
        //int ansBrute=brute(nums,target);
          return better(nums,target);
        //  int  optimal(nums, 0, nums.size()-1, target);
    }
};