/*
Approach:1
-I will do binary search from 1 to max value in nums.
-I will divide by each term with mid and find sum.
-If possible i will i will check for lower value,
-else i will check for higher value.
-TC:O(N logN)
-SC:O(1)
*/


class Solution {
public:
    bool possible(vector<int>&nums, int mid, int threshold){
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=ceil(double(nums[i])/(double(mid)));
        }
        if(sum<=threshold) return true;
        return false;
    }

   
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int maxi=INT_MIN;
        cout<<round(7/3);
        for(int i=0; i<n; i++){
            maxi=max(maxi,nums[i]);
        }
        int low=1;
        int high=maxi;
        int ans=1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(nums,mid,threshold)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};