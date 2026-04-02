class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //Brute
        // int n = nums.size();
        // unordered_map<int, int> mpp;
        // vector<int> ans;
        // int mini=(n/3)+1;
        // for (int num : nums) {
        //     mpp[num]++;
        //     if (mpp[num]==mini) {
        //         ans.push_back(num);
        //     }
        // }
        // return ans;
        //------------------------------------------------------
        
        //Optimal
        int n=nums.size();
        int cnt1=0;
        int cnt2=0;
        int el1=INT_MIN;
        int el2=INT_MIN;
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(cnt1==0 && el2!=nums[i]){
                el1=nums[i];
                cnt1=1;
            }else if(cnt2==0 && el1!=nums[i]){
                el2=nums[i];
                cnt2=1;
            }else if(nums[i]==el1) cnt1++;
             else if(nums[i]==el2) cnt2++;
             else{
                cnt1--;
                cnt2--;
             }
        }
        cnt1=0;
        cnt2=0;
        for(int i=0; i<n; i++){
            if(el1==nums[i]) cnt1++;
            if(el2==nums[i]) cnt2++;
        }
        int mini=(n/3)+1;
        if(cnt1>=mini) ans.push_back(el1);
        if(cnt2>=mini)  ans.push_back(el2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};