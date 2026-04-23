/*
Approach:
-If m*k>size of array, I will return -1.
-Else I will find min and max element from the array.
-I will use binary search from min to max to find which bloomday 
-can be our ans.
-TC:O(N)+O(NlogN)=O(NlogN)
-SC:O(1)



*/


class Solution {
public:
    bool possible(vector<int>&BloomDay,int mid,int m, int k){
        int cnt=0;
        int nBloom=0;
        for(int i=0; i<BloomDay.size(); i++){
            if(BloomDay[i]<=mid){
                cnt++;
            }else{
                nBloom+=(cnt/k);
                cnt=0;
            }
        }
       nBloom+=(cnt/k);
       return nBloom>=m;
    }


    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        // 1. CHECKING FOR IMPOSSIBLE CASE
        long long val = m * 1LL * k * 1LL;
        if(val>n) return -1;

        // 2. Finding MIN AND MAX ELEMENT
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }

        //3.Binay Search
        int low=mini, high=maxi;

        while(low<=high){
            int mid=low+(high-low)/2;
            //CHECKING IF THE MID IS POSSIBLE
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};