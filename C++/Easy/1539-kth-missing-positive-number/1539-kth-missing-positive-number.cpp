/*
Brute:
let have array be [2, 3, 4, ,5] and find 5th missing number
so the concept is
let consider intially that all numbers are missing and if all numbers are
missing then our fifth missing number will be x= 5 so now if we iterate over
array and we consider 2(0th element of array) so now  2 is not missing anymore
so now our 5th missing number will be x= 6 ,again on iterating we get 3 now our
3 is no more missing so now our 5th missing number will be x=7 ........... and
in this process if we find any element of array greater then x(where x is 5th
missing number)  it means that 5th missing number which is x till now is lesser
then current element of array hence it is our answer TC:O(N) SC:O(1)
*/

/*
Optimal:
-I will check how many numbers are missing at arr[mid].
-If missing numbers<k , low=mid+1
-if missing numbers>k , high=mid-1
-I will check how many numbers are missing with-> arr[mid]-(mid+1)
-At last high will point to number which is less than kth missing.
-So I will do k+high+1 to find the exact kth missing number.
-TC:O(Log N)
-SC:O(1)

*/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        //------Brute----
        // int n=arr.size();
        //  for(int i=0; i<n; i++){
        //     if(arr[i]<=k) k++;
        //     else break;
        // }
        // return k;

        //---Optimal-----
        int n = arr.size();
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            //Finding How many Missing number upto arr[mid]
            int missing = arr[mid] - (mid + 1);
            if (missing < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return k + high + 1;
    }
};