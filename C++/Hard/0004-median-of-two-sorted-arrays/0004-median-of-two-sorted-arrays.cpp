class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //Approach 1:
        int m=nums1.size();
        int n=nums2.size();
        vector<int> arr;
        for(int i=0; i<m; i++){
            arr.push_back(nums1[i]);
        }
        for(int i=0; i<n; i++){
            arr.push_back(nums2[i]);
        }

        sort(arr.begin(), arr.end());
        double ans;
        int index=(m+n)/2;
        if((m+n)%2==0){
            ans=(arr[index-1]+arr[index])/2.0;
        }else{
            ans=arr[index];
        }
        return ans;
    }
};