/*
----Brute----
In the brute force method, we generate all possible subarrays and calculate the product of each subarray. We track the maximum product found among all. Use two nested loops, the outer loop picks the starting index of the subarray and the inner loop picks the ending index. For every subarray defined by start and end, calculate the product and update the maximum product if the current subarray's product is larger.


*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];

        for(int i=0; i<n; i++){
            int product=1;
            for(int j=i; j<n; j++){
                product*=nums[j];
                if(product>maxi){
                    maxi=max(product,maxi);
                }
            }
        }
        return maxi;
    }
};