/*
----Brute----
In the brute force method, we generate all possible subarrays and calculate the product of each subarray. We track the maximum product found among all. Use two nested loops, the outer loop picks the starting index of the subarray and the inner loop picks the ending index. For every subarray defined by start and end, calculate the product and update the maximum product if the current subarray's product is larger.

TC:O(N^2)
SC:O(1)
*/

/*
-----Optimal Approach 1
I will take a prefix multiplication from start and a suffix multiplication
from the end. And When there is zero i will reset the sufix or prefix to 1.
Then i will take the maxi as maximum product either from the prefix or suffix.

TC:O(N)
SC:O(1)

*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //------------Brute--------
        // int n = nums.size();
        // int maxi = nums[0];

        // for(int i=0; i<n; i++){
        //     int product=1;
        //     for(int j=i; j<n; j++){
        //         product*=nums[j];
        //         if(product>maxi){
        //             maxi=max(product,maxi);
        //         }
        //     }
        // }
        // return maxi;


        //Optimal 1------
        
        int n=nums.size();
        int suffix=1, prefix=1;
        int maxi=INT_MIN;

        for(int i=0; i<n; i++){
            if(suffix==0) suffix=1;
            if(prefix==0) prefix=1;

            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];

            maxi=max(maxi,max(suffix,prefix));
        }

        return maxi;
    }
};