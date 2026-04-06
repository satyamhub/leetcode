class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //----------Brute-------------------
        // for(int i=0; i<n; i++){
        //     nums1[m+i]=nums2[i];
        // }
        // sort(nums1.begin(),nums1.end());
 
       //------Better------------
        int p1=0;
        int p2=0;

        while(p1<m+n && p2<n){
            if(p1<m){
                if(nums1[p1]<=nums2[p2]){
                    p1++;
                }else{
                    swap(nums1[p1],nums2[p2]);
                    p1++;
                }
            }
            if(p1>=m && p2<n){
                swap(nums1[p1],nums2[p2]);
                p1++;
                p2++;
            }
        }
        
    }
};