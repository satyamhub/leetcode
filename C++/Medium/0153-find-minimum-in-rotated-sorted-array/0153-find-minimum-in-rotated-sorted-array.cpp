class Solution {
public:
    int findMin(vector<int>& nums) {
        //---Brute----
        // int n=nums.size();
        // int mini=INT_MAX;
        
        // for(int i=0; i<n; i++){
        //     if(nums[i]<mini){
        //         mini=min(mini,nums[i]);
        //     }
        // }
        // return mini;


        //----Optimal----
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mini=INT_MAX;

        while(low<=high){
            int mid=low+(high-low)/2;
            mini=min(nums[mid],mini);

            //(left half is sorted)
            if(nums[low]<=nums[mid] && nums[mid]>nums[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return mini;
    }
};