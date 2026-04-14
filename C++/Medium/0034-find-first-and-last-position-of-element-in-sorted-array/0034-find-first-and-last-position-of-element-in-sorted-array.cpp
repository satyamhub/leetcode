/*
----Brute----
I will use linear search and find first target from start and
first target from end.
When i find both i will break the loop.

TC:O(N)
SC:O(1)
*/

/*
---Optimal-----





*/


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //---Brute-----
        // int n=nums.size();
        // int start=-1;
        // int end=-1;

        // for(int i=0; i<n; i++){
        //     if(start!=-1 && end!=-1){
        //         break;
        //     }

        //     if(nums[i]==target && start==-1){
        //         start=i;
        //     }
        //     if(nums[n-i-1]==target && end==-1){
        //         end=n-i-1;
        //     }
        // }

        // return {start,end};

        //----Optimal-------
        int n=nums.size();
        int start=-1;
        int end=-1;

        int low=0, high=n-1;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target) high=mid-1;
            else if(nums[mid]<target) low=mid+1;
            else if(nums[mid]==target){
                low=mid;
                high=mid;
                start=low;
                end=high;
                while(nums[low-1]==target){
                    low--;
                    start=low;
                }
                while(nums[high+1]==target){
                    high++;
                    end=high;
                }

                if(start!=-1 && end!=-1){
                    break;
                }
            }
        }
        return {start,end};
    }
};