/*
Appraoch:
-Low=Max element and High=Sum of all elements.
-Then mid=(low+high)/2, and will check how many subarray can be made
-using mid as max subarray sum.
-if number of subarray>k, i will do low=mid+1
-if number of subarray<=k, i will do high=mid-1
-then i will return low as ans.

TC:O(Sum-maxElement)+O(N)
SC:(1)
*/


class Solution {
public:
    int nSubarray(vector<int>& nums, int mid){
         int sum=0;
         int cntsubarray=1;
         for(int i=0; i<nums.size(); i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }else{
                sum=nums[i];
                cntsubarray+=1;
            }
            
         }
        cout<<cntsubarray<<endl;
        return cntsubarray;
    }

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();

        int maxi=INT_MIN;
        int sum=0;
        for(int i=0; i<n; i++){
            maxi=max(nums[i],maxi);
            sum+=nums[i];
        }

        int low=maxi;
        int high=sum;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int cntSubarray=nSubarray(nums, mid);
            if(cntSubarray>k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};