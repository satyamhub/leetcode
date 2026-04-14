/*
----Brute----
I will iterate from start and will search for the target and return the index.
TC:O(N)
SC:O(1)
*/

/*
-----Better-----
I will use the binary search.


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

    int search(vector<int>& nums, int target) {
        //int ansBrute=brute(nums,target);
        int ansBetter=better(nums,target);
        
        return ansBetter;
    }
};