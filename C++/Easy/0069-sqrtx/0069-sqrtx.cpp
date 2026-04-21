/*
---Brute---
I will do linear search and find i*i<=x; i++;
return i-1;
TC:(sqrt(X))
SC:O(1)
*/
/*
---Optimal----
I will use binary Search.
TC:O(log x)
SC:O(1)

*/

class Solution {
public:
    int mySqrt(int x) {
        //--Brute---
        
        // long long i=1;

        // while(i*i<=x){
        //     i++;
        // }
        // return i-1;

        //----Optimal----
        int ans=0;
        int low=1;
        int high=x;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid<=x/mid){
                ans=mid;
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        return ans;
    }
};