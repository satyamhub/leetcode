class Solution {
public:
    bool possible(vector<int>& weights, int mid, int days){
        int load=0;
        int ndays=1;
        for(int i=0; i<weights.size(); i++){
            if(load+weights[i]>mid){
                ndays++;
                load=weights[i];
            }else{
                load+=weights[i];
            }
        }
        if(ndays<=days) return true;
        return false;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0; i<n; i++){
            maxi=max(maxi,weights[i]);
            sum+=weights[i];
        }

        int low=maxi;
        int high=sum;
        int ans=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(weights, mid, days)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};