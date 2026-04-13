/*
----Brute----
I will use two nestes loops and get the product of each subarray.
I will insert it in a maxi.


*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            int product=nums[i];
            maxi=max(product,maxi);
            for(int j=i+1; j<n; j++){
                product*=nums[j];
                if(product>maxi){
                    maxi=max(product,maxi);
                }
            }
            maxi=max(product,maxi);
        }
        return maxi;
    }
};